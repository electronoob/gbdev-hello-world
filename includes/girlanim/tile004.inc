; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: tile004.png
; Pixel Width: 152px
; Pixel Height: 112px

; WARNING:  Width of input image padded 2px to 152px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

tile004_tile_map_size EQU $0400
tile004_tile_map_width EQU $20
tile004_tile_map_height EQU $20

tile004_tile_data_size EQU $04C0
tile004_tile_count EQU $010A

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

tile004_map_data:
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$02,$03
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$04,$05,$00,$00,$00,$06,$07,$08
DB $09,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$0A,$0B,$0C,$00,$00,$0D,$0E,$0F
DB $10,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$11,$12,$00,$00,$13,$14,$15
DB $16,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$17,$18,$19,$1A,$1B,$1C
DB $1D,$1E,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$1F,$20,$21,$22,$23,$24
DB $25,$26,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$27,$28,$29,$2A
DB $2B,$2C,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$2D,$2E,$2F,$30,$31,$32
DB $33,$34,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$35,$36,$00,$00,$00,$00,$2D,$37,$38,$39,$3A,$3B,$3C,$3D
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$3E,$3F,$40,$41,$42,$43,$44,$45,$46,$47,$48,$49,$4A,$4B
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
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

tile004_tile_data:
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F5,$FF,$A0,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$DF,$0F,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$17,$FF,$80
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$EF,$FF,$C7,$FF,$83
DB $FF,$FF,$FF,$FF,$FA,$FF,$F3,$FF,$FD,$FF,$EB,$FF,$CB,$FF,$CB,$FF
DB $20,$FF,$A0,$FF,$9E,$E1,$3F,$C0,$7F,$80,$7F,$80,$7F,$80,$3D,$C2
DB $05,$FB,$40,$FF,$28,$FF,$2A,$FF,$D6,$3F,$CB,$3F,$ED,$1F,$77,$8F
DB $FF,$FF,$FF,$FF,$FF,$7F,$7F,$FF,$7F,$FF,$3F,$FF,$1F,$FF,$BF,$FF
DB $FF,$00,$FF,$80,$FF,$C0,$FF,$F8,$FF,$FC,$FF,$FE,$FF,$FF,$FF,$FF
DB $FF,$03,$FF,$03,$FF,$01,$FF,$01,$FF,$00,$FF,$80,$FF,$E0,$FF,$F0
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$3F
DB $DD,$FF,$A7,$FF,$9A,$FF,$AB,$FF,$BD,$FF,$96,$FF,$D5,$FF,$CA,$FF
DB $7F,$80,$7F,$80,$7F,$80,$7F,$80,$7F,$80,$7F,$80,$7F,$80,$FF,$80
DB $F4,$0F,$F4,$0F,$F0,$0F,$E0,$1F,$E0,$1F,$E0,$1F,$C0,$3F,$C5,$3F
DB $1F,$FF,$9F,$FF,$1F,$FF,$8F,$FF,$2F,$FF,$8F,$FF,$A7,$FF,$4F,$FF
DB $FF,$F0,$FF,$F8,$FF,$FC,$FF,$FE,$FD,$FF,$FA,$FF,$FC,$FF,$FE,$FF
DB $FF,$1F,$CF,$3F,$C7,$3F,$53,$FF,$29,$FF,$89,$FF,$A4,$FF,$AA,$FF
DB $D0,$FF,$8F,$FF,$EF,$FF,$AF,$FE,$D3,$FF,$EB,$FF,$C5,$FE,$E2,$BF
DB $3E,$C1,$3C,$C3,$01,$FF,$41,$FF,$37,$FF,$31,$FF,$50,$FF,$20,$FF
DB $15,$FF,$56,$FF,$7A,$FF,$AD,$FF,$70,$FF,$88,$FF,$02,$FF,$90,$FF
DB $47,$FF,$A7,$FF,$2F,$FF,$03,$FF,$01,$FF,$00,$FF,$00,$FF,$00,$FF
DB $52,$FF,$A9,$FF,$CA,$FF,$F2,$FF,$F5,$FF,$F9,$FF,$FC,$FF,$FE,$FF
DB $BF,$FF,$3F,$FF,$BF,$FF,$4F,$FF,$55,$FF,$20,$FF,$A8,$FF,$44,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$5C,$FF,$05,$FF,$AA,$FF,$AD,$FF
DB $C4,$FF,$E2,$FF,$D5,$FF,$80,$FF,$AA,$FF,$40,$FF,$84,$FF,$40,$FF
DB $D0,$FF,$40,$FF,$00,$FF,$80,$FF,$24,$DF,$41,$BF,$48,$BF,$02,$FF
DB $04,$FF,$90,$FF,$21,$FF,$80,$FF,$24,$FF,$00,$FF,$04,$FF,$42,$FF
DB $00,$FF,$00,$FF,$20,$FF,$00,$FF,$90,$FF,$80,$FF,$48,$FF,$40,$FF
DB $7F,$FF,$3F,$FF,$BF,$5F,$3F,$FF,$7F,$9F,$3F,$DF,$3F,$DF,$1F,$EF
DB $FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $AA,$FF,$25,$FF,$96,$FF,$8B,$FF,$D5,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $B7,$FF,$DB,$FF,$B6,$FF,$DA,$FF,$57,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $00,$FF,$80,$FF,$80,$FF,$84,$FF,$90,$FF,$81,$FF,$84,$FF,$80,$FF
DB $A8,$7F,$00,$FF,$54,$FF,$55,$FF,$22,$FF,$51,$FF,$A5,$FF,$4A,$FF
DB $01,$FF,$54,$FF,$12,$FF,$4A,$FF,$A9,$FF,$24,$FF,$55,$FF,$A9,$FF
DB $40,$FF,$B0,$FF,$40,$FF,$B0,$FF,$40,$FF,$70,$FF,$20,$FF,$58,$FF
DB $1F,$FF,$1F,$EF,$1F,$EF,$0F,$FF,$2F,$D7,$0F,$FF,$0F,$F7,$07,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FC,$FE,$FD
DB $8A,$FF,$81,$FF,$80,$7F,$8F,$F0,$7F,$80,$FF,$00,$BF,$40,$FF,$00
DB $AD,$FF,$30,$FF,$00,$FF,$F0,$0F,$F8,$07,$F8,$07,$E1,$1F,$62,$9F
DB $04,$FF,$00,$FF,$00,$FF,$00,$FF,$01,$FF,$54,$FF,$13,$FF,$D5,$FF
DB $20,$FF,$01,$FF,$00,$FF,$05,$FF,$28,$FF,$46,$FF,$59,$FF,$6D,$FF
DB $07,$FF,$07,$FF,$47,$FF,$13,$FF,$AB,$FF,$A3,$FF,$53,$FF,$53,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F5,$FF,$BE,$FF,$77,$FF,$BD,$FF
DB $F9,$F7,$E4,$FF,$5D,$FE,$79,$FE,$D7,$F8,$E7,$F8,$9F,$E0,$1F,$E0
DB $FD,$02,$6D,$92,$9C,$63,$C2,$3F,$8A,$7F,$96,$7F,$E5,$3F,$D4,$3F
DB $0D,$FF,$15,$FF,$B6,$FF,$AB,$FF,$DB,$FF,$AD,$FF,$57,$FF,$A9,$FF
DB $55,$FF,$BD,$FF,$D7,$FF,$63,$FF,$AF,$FF,$A3,$FF,$A7,$FF,$57,$FF
DB $92,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $87,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE
DB $FF,$1F,$7F,$8F,$FF,$07,$FF,$07,$FF,$07,$FF,$03,$FF,$07,$FB,$07
DB $FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$F4,$FB,$F0,$EF,$00,$FF,$01,$FF
DB $FF,$FF,$FA,$FF,$D0,$FF,$81,$FF,$00,$FF,$05,$FF,$28,$FF,$04,$FF
DB $EE,$FF,$B4,$FF,$4A,$FF,$12,$FF,$49,$FF,$25,$FF,$94,$FF,$92,$FF
DB $7F,$80,$FF,$00,$9B,$E4,$00,$FF,$00,$FF,$40,$FF,$14,$FF,$80,$FF
DB $81,$7F,$D0,$3F,$C2,$3F,$50,$BF,$44,$BF,$04,$FF,$92,$FF,$09,$FF
DB $2A,$FF,$14,$FF,$42,$FF,$11,$FF,$88,$FF,$45,$FF,$10,$FF,$4A,$FF
DB $87,$FF,$A7,$FF,$07,$FF,$2F,$FF,$07,$FF,$4F,$FF,$07,$FF,$8F,$FF
DB $FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FF,$FF,$FF
DB $F4,$0B,$F8,$07,$F0,$0F,$F0,$0F,$F0,$0F,$F2,$0F,$F2,$0F,$FE,$EF
DB $DF,$7F,$0F,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$A0,$FF,$FA,$FF
DB $FF,$FF,$FF,$FF,$7F,$FF,$2F,$FF,$00,$FF,$00,$FF,$00,$FF,$EA,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$AA,$FF,$00,$FF,$00,$FF,$00,$FF,$AA,$FF
DB $FF,$FF,$FF,$FF,$FC,$FF,$80,$FF,$00,$FF,$02,$FF,$00,$FF,$AA,$FF
DB $40,$FF,$80,$FF,$02,$FF,$10,$FF,$45,$FF,$00,$FF,$4A,$FF,$AB,$FF
DB $04,$FF,$11,$FF,$A4,$FF,$15,$FF,$4A,$FF,$4A,$FF,$2B,$FF,$BF,$FF
DB $55,$FF,$55,$FF,$AA,$FF,$55,$FF,$AD,$FF,$EB,$FF,$7D,$FF,$FF,$FF
DB $4A,$FF,$55,$FF,$B4,$FF,$AF,$FF,$74,$FF,$BF,$FF,$6E,$FF,$FF,$FF
DB $04,$FF,$20,$FF,$0A,$FF,$40,$FF,$12,$FF,$40,$FF,$15,$FF,$AA,$FF
DB $A5,$FF,$09,$FF,$45,$FF,$21,$FF,$0A,$FF,$42,$FF,$15,$FF,$AA,$FF
DB $20,$FF,$4A,$FF,$50,$FF,$54,$FF,$D1,$FF,$7C,$FF,$AD,$FF,$FE,$FF
DB $27,$FF,$0F,$FF,$8F,$FF,$0F,$FF,$1F,$FF,$0F,$FF,$5F,$FF,$BF,$FF
