; 3/1/2017 - electronoob -  #gbdev on efnet.

INCLUDE "gbhw.inc"

SECTION "Variables", WRAM0
blankTile: ds 1
sineOffset: ds 1


SECTION	"Vblank",ROM0[$0040]
	call draw
	reti
SECTION	"LCDC",ROM0[$0048]
	reti
SECTION	"Timer_Overflow",ROM0[$0050]
	reti
SECTION	"Serial",ROM0[$0058]
	reti
SECTION	"p1thru4",ROM0[$0060]
	reti
SECTION	"start",ROM0[$0100]
	nop
	jp	begin
	ROM_HEADER	ROM_NOMBC, ROM_SIZE_32KBYTE, RAM_SIZE_0KBYTE



INCLUDE "memory.asm"


begin:
	di
	ld	sp, $ffff

	ld	a,20
	ld	[blankTile],a

	ld a,1
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
	




	ld	 a,%11100100	; load a normal palette up 11 10 01 00 - dark->light
	ldh	 [rBGP],a	; load the palette
	ldh  [rOBP0], a

	
	





	;ld	a, LCDCF_ON|LCDCF_BG8000|LCDCF_BG9800|LCDCF_BGON|LCDCF_OBJ16|LCDCF_OBJOFF 
	


	; clear the lcd with sprite 21 from electronoob logo
	ld	a, [blankTile]		; blank tile
	ld	hl, _SCRN0
	ld	bc, SCRN_VX_B * SCRN_VY_B
	call	mem_SetVRAM


	ld	 a,%10010110	
	ld	[rLCDC], a	

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

;        ld      [rSCX], a
;        ld      [rSCY], a

;	ld	hl,TitleP1
;	ld 	de, _SCRN0
;	ld	bc, TitleP1End-TitleP1
;	call	mem_CopyVRAM

;        ld      hl,TitleP2
;        ld      de, _SCRN0+SCRN_VY_B
;        ld      bc, TitleP2End-TitleP2
;        call    mem_CopyVRAM



	; clear out the object attribute memory (OAM)
	; using: mem_Set (a->val, hl->pMem, bc->byte count)
;	ld a, 0
;	ld hl, _OAMRAM			; start of ram
;	ld bc, $A0			; the full size of the OAM area: 40 bytes*4 bytes per sprite
;	call mem_Set

	ld hl, _OAMRAM
	ld a,[sineOffset] 
	ld [hl], a ; y
	inc hl
        ;ld a, 32
	ld a,[sineOffset]
	ld [hl], a ; x
	inc hl
        ld a, 2
	ld [hl], a ; tile
	inc hl
        ld a, $ff
	ld [hl], a ; attr
;
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
