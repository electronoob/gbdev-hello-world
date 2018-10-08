; 3/1/2017 - electronoob -  #gbdev on efnet.

INCLUDE "gbhw.inc"

SECTION "Variables", WRAM0
fOffset: ds 1
mindex: dw

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

INCLUDE "girlanim/tile000.inc"
INCLUDE "girlanim/tile001.inc"
INCLUDE "girlanim/tile002.inc"
INCLUDE "girlanim/tile003.inc"
INCLUDE "girlanim/tile004.inc"
INCLUDE "girlanim/tile005.inc"
INCLUDE "girlanim/tile006.inc"
;INCLUDE "girlanim/tile007.inc"
;INCLUDE "girlanim/tile008.inc"
;INCLUDE "girlanim/tile009.inc"
;INCLUDE "girlanim/tile010.inc"
;INCLUDE "girlanim/tile011.inc"
;INCLUDE "girlanim/tile012.inc"
;INCLUDE "girlanim/tile013.inc"
;INCLUDE "girlanim/tile014.inc"


begin:
	di
	ld	sp, $ffff


	ld a,0
	ld [fOffset],a

	ld	a, %11100100
	ld	[rBGP], a

	ld	a,0
	ld	[rSCX], a
	ld	[rSCY], a

	call	StopLCD


	ld	a, LCDCF_ON|LCDCF_BG8000|LCDCF_BG9800|LCDCF_BGON|LCDCF_OBJ16|LCDCF_OBJOFF 
	ld	[rLCDC], a	


	ld a, IEF_VBLANK
	ld [rIE], a
	ei

LOOP:
	call WAIT_VBLANK
	call COCKS


	jp LOOP


WAIT_VBLANK:
	ld  hl,vblank_flag
.wait_vblank_loop
	halt
	nop  			 ;Hardware bug
	ld  a,$0
	cp  [hl]
	jr  z,.wait_vblank_loop
	ld  [hl],a
	ld  a,[vblank_count]
	inc a
	ld  [vblank_count],a
	ret



COCKS:
	ld a, [fOffset]
	cp      0
	jr      nz,.frame0
	ld a, [fOffset]
	cp      1
	jr      nz,.frame1
	ld a, [fOffset]
	cp      2
	jr      nz,.frame2
	jr 		.bypass

.frame0:
	ld	hl, tile000_tile_data
	ld	de, _VRAM		; $8000
	ld	bc, tile000_tile_data_size
	call	mem_Copy		; load tile data

	ld	hl,tile000_map_data
	ld 	de, _SCRN0
	ld	bc, tile000_tile_map_size
	call	mem_CopyVRAM
	ld a, [fOffset]
	inc a
	ld [fOffset],a
	jr .bypass

.frame1:
	ld	hl, tile001_tile_data
	ld	de, _VRAM		; $8000
	ld	bc, tile001_tile_data_size
	call	mem_Copy		; load tile data

	ld	hl,tile001_map_data
	ld 	de, _SCRN0
	ld	bc, tile001_tile_map_size
	call	mem_CopyVRAM
	ld a, [fOffset]
	inc a
	ld [fOffset],a
	jr .bypass

.frame2:
	ld	hl, tile002_tile_data
	ld	de, _VRAM		; $8000
	ld	bc, tile002_tile_data_size
	call	mem_Copy		; load tile data

	ld	hl,tile002_map_data
	ld 	de, _SCRN0
	ld	bc, tile002_tile_map_size
	call	mem_CopyVRAM
	ld a, 0
	inc a
	ld [fOffset],a
	jr .bypass

.bypass:
	ret


draw:



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


SECTION "RAM Vars",BSS[$C000]
vblank_flag:
db
vblank_count:
db