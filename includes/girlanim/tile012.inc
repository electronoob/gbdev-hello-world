; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: tile012.png
; Pixel Width: 152px
; Pixel Height: 112px

; WARNING:  Width of input image padded 2px to 152px
; WARNING: Height of input image padded 1px to 112px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

tile012_tile_map_size EQU $0400
tile012_tile_map_width EQU $20
tile012_tile_map_height EQU $20

tile012_tile_data_size EQU $0200
tile012_tile_count EQU $010A

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

tile012_map_data:
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$02,$03,$04,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$05,$06,$07,$08,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$09,$0A,$0B,$0C,$0D,$0E,$0F,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$10,$11,$12,$13,$14,$15,$16,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $17,$17,$17,$18,$19,$1A,$1B,$1C,$1D,$1E,$17,$17,$17,$17,$17,$17
DB $17,$17,$1F,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00

; /////////////////
; //             //
; //  Tile Data  //
; //             //
; /////////////////

tile012_tile_data:
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FD,$FE,$FD,$FE
DB $FF,$FF,$FF,$FF,$D7,$ED,$D3,$AC,$42,$BD,$02,$FD,$21,$DE,$18,$E7
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$BF,$FF,$07,$7F,$83,$17,$E9,$80,$7F
DB $F8,$FF,$F8,$FF,$F8,$F7,$F0,$FF,$F1,$FF,$E0,$FF,$D2,$EF,$C2,$FF
DB $14,$FB,$50,$FF,$AA,$FF,$59,$FF,$6A,$FF,$55,$FF,$DA,$FF,$55,$FF
DB $00,$FF,$04,$FF,$A0,$FF,$2F,$FF,$1F,$FF,$7F,$FF,$7F,$FF,$FF,$FF
DB $7F,$FF,$7F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FC,$FF,$FC
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$50,$FF,$80,$FF,$00,$FE,$01
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$1F,$FF,$3F,$9F,$7F,$3F,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FC,$FF,$FC,$FF
DB $81,$FF,$C4,$BF,$05,$FF,$05,$FF,$15,$FF,$0A,$FF,$25,$FF,$12,$FF
DB $6A,$FF,$B6,$FF,$55,$FF,$55,$FF,$5B,$FF,$AA,$FF,$55,$FF,$AD,$FF
DB $BF,$FF,$BF,$FF,$4F,$FF,$6F,$FF,$4F,$FF,$8F,$FF,$5F,$FF,$3F,$FF
DB $FF,$F0,$FF,$F0,$FF,$E0,$FF,$E0,$FE,$C1,$ED,$F3,$C3,$FF,$E1,$FF
DB $FC,$03,$F6,$0F,$C0,$3F,$BC,$7F,$53,$FF,$57,$FF,$67,$FF,$DF,$FF
DB $7F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $F9,$FF,$F8,$FF,$F1,$FF,$F0,$FF,$E1,$FF,$E0,$FF,$C5,$FF,$C0,$FF
DB $4A,$FF,$2A,$FF,$45,$FF,$52,$FF,$29,$FF,$45,$FF,$32,$FF,$89,$FF
DB $AA,$FF,$4A,$FF,$54,$FF,$54,$FF,$55,$FF,$53,$FF,$A7,$FF,$6F,$FF
DB $BF,$FF,$7F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$00
DB $F7,$FF,$EF,$FF,$C0,$FF,$80,$FF,$80,$FF,$94,$FF,$80,$FF,$00,$00
DB $C6,$FF,$82,$FF,$16,$FF,$0B,$FF,$15,$FF,$2D,$FF,$36,$FF,$00,$00
DB $B7,$FF,$DF,$FF,$B7,$FF,$BB,$FF,$5E,$FF,$AB,$FF,$DD,$FF,$00,$00
DB $FF,$FF,$FF,$FF,$7F,$FF,$FF,$FF,$7F,$FF,$7E,$FF,$7E,$FF,$00,$00
DB $85,$FF,$80,$FF,$0A,$FF,$82,$FF,$12,$FF,$12,$FF,$05,$FF,$00,$00
DB $55,$FF,$4A,$FF,$AA,$FF,$5A,$FF,$AD,$FF,$D7,$FF,$B3,$FF,$00,$00
DB $5F,$FF,$BF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$00
DB $FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$00,$00