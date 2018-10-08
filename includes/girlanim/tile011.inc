; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: tile011.png
; Pixel Width: 152px
; Pixel Height: 112px

; WARNING:  Width of input image padded 2px to 152px
; WARNING: Height of input image padded 1px to 112px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

tile011_tile_map_size EQU $0400
tile011_tile_map_width EQU $20
tile011_tile_map_height EQU $20

tile011_tile_data_size EQU $01F0
tile011_tile_count EQU $010A

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

tile011_map_data:
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
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$02,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$03,$04,$05,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$06,$07,$08,$09,$0A,$0B,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$0C,$0D,$0E,$0F,$10,$11,$12,$13,$14,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $15,$15,$15,$16,$17,$18,$19,$1A,$1B,$1C,$1D,$15,$15,$15,$15,$15
DB $15,$15,$1E,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
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

tile011_tile_data:
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FB
DB $FC,$FF,$FC,$FF,$FC,$FF,$F8,$FF,$D0,$FF,$81,$FE,$82,$FF,$95,$FF
DB $7F,$C0,$3F,$C0,$4F,$B0,$00,$FF,$40,$BF,$01,$FF,$00,$FF,$0A,$FF
DB $FF,$7F,$FF,$3F,$FF,$1F,$3F,$DF,$0F,$FF,$2F,$FF,$1F,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F0,$FF,$E0,$FF,$C0,$FF,$C0
DB $FF,$FF,$FF,$FF,$FF,$F7,$FF,$E2,$FF,$00,$FF,$00,$F2,$0F,$34,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$BF,$FF,$1F,$3F,$FF,$3F,$DF,$3F,$FF
DB $FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FC,$FF,$F8,$FF,$F4,$FB,$F0,$FF
DB $0A,$FF,$0D,$FF,$2A,$FF,$16,$FF,$55,$FF,$15,$FF,$56,$FF,$2A,$FF
DB $D0,$FF,$5F,$FF,$9F,$FF,$FF,$FF,$1F,$FF,$CF,$FF,$57,$FF,$AB,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$BF,$FF,$1C,$FF,$08,$FF,$40,$FF,$00,$FF
DB $FC,$C3,$B1,$CF,$02,$FF,$05,$FF,$23,$DF,$0A,$FF,$8B,$7F,$2A,$FF
DB $28,$FF,$B0,$FF,$D3,$FD,$4F,$FF,$9F,$FF,$FF,$FF,$97,$FF,$FB,$FF
DB $7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $F1,$FF,$E0,$FF,$C0,$FF,$C2,$FF,$81,$FF,$84,$FF,$09,$FF,$05,$FF
DB $4A,$FF,$AA,$FF,$AA,$FF,$2A,$FF,$4A,$FF,$A9,$FF,$4A,$FF,$2A,$FF
DB $AA,$FF,$AA,$FF,$AA,$FF,$B4,$FF,$A9,$FF,$57,$FF,$AF,$FF,$AF,$FF
DB $7F,$FF,$FF,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$00
DB $FC,$FF,$FE,$FD,$FC,$FF,$FE,$FD,$FC,$FF,$FC,$FB,$F8,$FF,$00,$00
DB $14,$EB,$01,$FF,$21,$DF,$0D,$FF,$6A,$FF,$6F,$FF,$5A,$FF,$00,$00
DB $2D,$FF,$56,$FF,$6D,$FF,$B5,$FF,$AA,$FF,$56,$FF,$D6,$FF,$00,$00
DB $B1,$FF,$DB,$FF,$43,$FF,$53,$FF,$A7,$FF,$AF,$FF,$A7,$FF,$00,$00
DB $FE,$FF,$FE,$FF,$FC,$FF,$F8,$FF,$F8,$FF,$F8,$FF,$F0,$FF,$00,$00
DB $01,$FF,$14,$FF,$13,$FF,$48,$FF,$2A,$FF,$2A,$FF,$89,$FF,$00,$00
DB $4A,$FF,$55,$FF,$15,$FF,$AD,$FF,$95,$FF,$57,$FF,$57,$FF,$00,$00
DB $9F,$FF,$7F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$00
DB $FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$00,$00