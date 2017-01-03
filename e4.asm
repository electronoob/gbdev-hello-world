; 3/1/2017 - electronoob -  #gbdev on efnet.

INCLUDE "gbhw.inc"

SECTION "Variables", WRAM0
blankTile: ds 1
sineOffset: ds 1

SECTION	"Vblank",HOME[$0040]
	call draw
	reti
SECTION	"LCDC",HOME[$0048]
	reti
SECTION	"Timer_Overflow",HOME[$0050]
	reti
SECTION	"Serial",HOME[$0058]
	reti
SECTION	"p1thru4",HOME[$0060]
	reti
SECTION	"start",HOME[$0100]
	nop
	jp	begin
	ROM_HEADER	ROM_NOMBC, ROM_SIZE_32KBYTE, RAM_SIZE_0KBYTE



INCLUDE "memory.asm"


begin:
	di
	ld	sp, $ffff

	ld	a,24
	ld	[blankTile],a

	ld a,0
	ld [sineOffset],a

	ld	a, %11100100
	ld	[rBGP], a

	ld	a,0
	ld	[rSCX], a
	ld	[rSCY], a

	call	StopLCD

	ld	hl, TileData
	ld	de, _VRAM		; $8000
	ld	bc, 8*256 		; the ASCII character set: 256 characters, each with 8 bytes of display data
	call	mem_CopyMono		; load tile data
	
	ld	a, LCDCF_ON|LCDCF_BG8000|LCDCF_BG9800|LCDCF_BGON|LCDCF_OBJ16|LCDCF_OBJOFF 
	ld	[rLCDC], a	


	; clear the lcd with sprite 21 from electronoob logo
	ld	a, [blankTile]		; blank tile
	ld	hl, _SCRN0
	ld	bc, SCRN_VX_B * SCRN_VY_B
	call	mem_SetVRAM


	ld a, IEF_VBLANK
	ld [rIE], a
	ei


wait:
	halt
	nop
	jr	wait

draw:

        
        ld a,[sineOffset]
	inc a
        ld [sineOffset],a

        ld      [rSCX], a
        ld      [rSCY], a

	ld	hl,TitleP1
	ld 	de, _SCRN0
	ld	bc, TitleP1End-TitleP1
	call	mem_CopyVRAM

        ld      hl,TitleP2
        ld      de, _SCRN0+SCRN_VY_B
        ld      bc, TitleP2End-TitleP2
        call    mem_CopyVRAM
	ret


StopLCD:
        ld      a,[rLCDC]
        rlca                    ; Put the high bit of LCDC into the Carry flag
        ret     nc              ; Screen is off already. Exit.
.wait:
        ld      a,[rLY]
        cp      145             ; Is display on scan line 145 yet?
        jr      nz,.wait        ; no, keep waiting

        ld      a,[rLCDC]
        res     7,a             ; Reset bit 7 of LCDC
        ld      [rLCDC],a

        ret

TitleP1:
	DB	0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19
TitleP1End:
TitleP2:
        DB      22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41
TitleP2End:

;load my logo tiles
INCLUDE "electro.inc"
