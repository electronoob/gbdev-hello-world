; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: tile000.png
; Pixel Width: 152px
; Pixel Height: 112px

; WARNING:  Width of input image padded 2px to 152px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

tile000_tile_map_size EQU $0400
tile000_tile_map_width EQU $20
tile000_tile_map_height EQU $20

tile000_tile_data_size EQU $0430
tile000_tile_count EQU $010A

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

tile000_map_data:
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$02,$03
DB $04,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$05,$06
DB $07,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$08,$09
DB $0A,$0B,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$0C,$0D,$0E
DB $0F,$10,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$11,$12,$13,$00,$00,$14,$15,$16,$17
DB $18,$19,$1A,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$1B,$1C,$1D,$1E,$1F,$20,$21,$22
DB $23,$24,$25,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$26,$27,$28,$00,$29,$2A
DB $2B,$2C,$2D,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$2E,$2F,$30
DB $31,$32,$33,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$34,$35,$36
DB $37,$38,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$39,$3A,$3B
DB $3C,$3D,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$3E,$3F,$40
DB $41,$42,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
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

tile000_tile_data:
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC
DB $FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FC,$FF,$F9,$FF,$F9,$FF,$FC,$FF
DB $C3,$FD,$80,$FF,$20,$FF,$94,$FF,$65,$FF,$08,$F7,$3F,$C0,$FF,$80
DB $FF,$7F,$3F,$FF,$1F,$FF,$0F,$FF,$07,$FF,$07,$FF,$AF,$7F,$CB,$3F
DB $F1,$FF,$E4,$FF,$E3,$FF,$E9,$FF,$D6,$FF,$CA,$BF,$F6,$FF,$96,$FF
DB $7F,$80,$7F,$80,$7E,$81,$0F,$F0,$FE,$01,$FF,$00,$FF,$00,$FE,$01
DB $EB,$1F,$27,$DF,$2D,$DF,$07,$FF,$F9,$0F,$FD,$0F,$FA,$0F,$AC,$5F
DB $DD,$FF,$97,$FF,$FB,$FF,$D5,$BF,$AF,$7F,$EB,$BF,$AE,$FF,$97,$FF
DB $FD,$02,$FE,$01,$7E,$81,$7E,$81,$BF,$C0,$9E,$E1,$A8,$D7,$98,$E7
DB $4A,$BF,$76,$9F,$8A,$7F,$DE,$3F,$B4,$7F,$5C,$FF,$E9,$FF,$5F,$FD
DB $7F,$FF,$FF,$FF,$7F,$FF,$FF,$FF,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FE,$FF,$FC,$FF,$FC,$FF,$F8,$F7,$F9,$FF,$F1,$FF,$F9,$EF
DB $5B,$FF,$5D,$FF,$EE,$FF,$6A,$FF,$B4,$FF,$1A,$FF,$50,$FF,$54,$FF
DB $BA,$C5,$BC,$C3,$BD,$C3,$39,$C7,$7D,$87,$72,$8F,$FC,$0F,$F8,$0F
DB $A3,$FD,$BB,$FF,$68,$FF,$54,$FF,$00,$FF,$90,$FF,$04,$FF,$21,$FF
DB $FF,$FF,$FF,$FF,$7F,$FF,$0F,$FF,$07,$FF,$03,$FF,$03,$FF,$53,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F0,$FF,$F8,$FF,$FC,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$AA,$FF,$00,$FF,$00,$FF,$00,$FF,$80
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$1F,$FF,$1F,$FF,$0F,$FF,$02
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FC,$FF,$F8,$FF
DB $F2,$EF,$E8,$FF,$C6,$FF,$82,$FF,$2C,$FF,$26,$FF,$54,$FF,$2A,$FF
DB $A0,$FF,$08,$FF,$81,$FE,$00,$FF,$49,$FE,$03,$FC,$02,$FD,$83,$FC
DB $F2,$0F,$E0,$1F,$80,$7F,$C1,$7F,$00,$FF,$04,$FF,$81,$7F,$89,$7F
DB $10,$FF,$8A,$FF,$20,$FF,$04,$FF,$82,$FF,$21,$FF,$0A,$FF,$02,$FF
DB $21,$FF,$91,$FF,$A0,$FF,$28,$FF,$A8,$FF,$44,$FF,$A8,$FF,$AA,$FF
DB $FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$7C,$FC,$7C,$FC,$7C,$FC,$7C,$FC
DB $CF,$F0,$FA,$FD,$FF,$FD,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$00,$8F,$70,$57,$F8,$FE,$FF,$FE,$FF,$FE,$FF,$FF,$FF,$FE,$FF
DB $FF,$7F,$CF,$3F,$C0,$3F,$D5,$3F,$2A,$FF,$9A,$FF,$6D,$FF,$AB,$FF
DB $FF,$FF,$FF,$FF,$5F,$FF,$00,$FF,$C0,$FF,$B5,$FF,$55,$FF,$B6,$FF
DB $E2,$FF,$C1,$FF,$14,$FF,$05,$FF,$2A,$FF,$25,$FF,$56,$FF,$AA,$FF
DB $AC,$FF,$34,$FF,$DC,$FF,$6E,$FF,$BE,$FF,$BF,$FE,$7F,$FF,$FF,$FF
DB $13,$FC,$01,$FE,$07,$F8,$01,$FE,$00,$FF,$A0,$FF,$00,$FF,$00,$FF
DB $80,$7F,$92,$7F,$00,$FF,$14,$FF,$2A,$FF,$AA,$FF,$32,$FF,$A9,$FF
DB $2A,$FF,$0A,$FF,$92,$FF,$4A,$FF,$52,$FF,$AB,$FF,$AD,$FF,$69,$FF
DB $92,$FF,$CA,$FF,$A1,$FF,$54,$FF,$A2,$FF,$52,$FF,$48,$FF,$EA,$FF
DB $7C,$FC,$3C,$FC,$7C,$FC,$BC,$FC,$5C,$FC,$3C,$FC,$9C,$FC,$1C,$FC
DB $55,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $5B,$FF,$C5,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $55,$FF,$77,$FF,$5F,$EF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $48,$FF,$00,$FF,$20,$FF,$A9,$FF,$02,$FF,$91,$FF,$05,$FF,$A4,$FF
DB $53,$FF,$A5,$FF,$5A,$FF,$4C,$FF,$B1,$FF,$40,$FF,$14,$FF,$82,$FF
DB $AA,$FF,$52,$FF,$88,$FF,$54,$FF,$09,$FF,$48,$FF,$20,$FF,$00,$FF
DB $D1,$7F,$EC,$FF,$CA,$FF,$E1,$FF,$FA,$4F,$01,$FF,$14,$FF,$05,$FF
DB $5C,$FC,$0C,$FC,$1C,$FC,$8C,$FC,$4C,$F4,$2C,$FC,$9C,$FC,$4C,$FC
DB $FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FC,$FF,$FE,$FF,$FC,$FF,$FC,$FF
DB $02,$FF,$21,$FE,$0F,$F0,$38,$C7,$21,$DE,$B7,$C8,$1E,$E1,$00,$FF
DB $78,$87,$FC,$03,$F8,$07,$F1,$0F,$C2,$3F,$C6,$3F,$1E,$FF,$22,$FF
DB $14,$FF,$82,$FF,$29,$FF,$04,$FF,$AB,$FF,$AD,$FF,$FF,$FF,$B5,$FF
DB $92,$FF,$09,$FF,$A5,$FF,$56,$FF,$AB,$FD,$FF,$EF,$7F,$FF,$FF,$FF
DB $AC,$FC,$2C,$FC,$5C,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC
DB $FC,$FF,$F8,$FF,$F8,$FF,$F9,$FF,$F0,$FF,$FD,$FF,$F0,$FF,$F2,$FF
DB $81,$FF,$50,$FF,$11,$FF,$40,$FF,$34,$FB,$04,$FB,$44,$FB,$2F,$F0
DB $5F,$FF,$A2,$FF,$55,$FF,$95,$FF,$49,$FF,$4A,$FF,$11,$FF,$8A,$FF
DB $D4,$FF,$AA,$FF,$49,$FF,$24,$FF,$42,$FF,$51,$FF,$00,$FF,$49,$FF
DB $7F,$FF,$3F,$FF,$7F,$FF,$3F,$FF,$3F,$FF,$3F,$FF,$1F,$FF,$3F,$FF
DB $F0,$FF,$E4,$FF,$F1,$FF,$E8,$FF,$E2,$FF,$E0,$FF,$EA,$DF,$F9,$EF
DB $B6,$E9,$37,$E8,$48,$F7,$71,$FF,$D2,$FF,$72,$FF,$D5,$FF,$E8,$FF
DB $00,$FF,$54,$FF,$00,$FF,$44,$FF,$A0,$FF,$52,$FF,$20,$FF,$95,$FF
DB $80,$FF,$12,$FF,$80,$FF,$24,$FF,$00,$FF,$49,$FF,$00,$FF,$2A,$FF
DB $1F,$FF,$1F,$FF,$9F,$FF,$1F,$FF,$1F,$FF,$0F,$FF,$0F,$FF,$8F,$FF
DB $FD,$FF,$FE,$FF,$FC,$FF,$FE,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF
DB $55,$FF,$AA,$FF,$95,$FF,$4A,$FF,$55,$FF,$55,$FF,$95,$FF,$FF,$FF
DB $41,$FF,$A8,$FF,$82,$FF,$D2,$FF,$00,$FF,$94,$FF,$02,$FF,$AA,$FF
DB $4B,$FF,$29,$FF,$4A,$FF,$25,$FF,$AA,$FF,$52,$FF,$95,$FF,$EB,$FF
DB $7F,$FF,$FF,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF
