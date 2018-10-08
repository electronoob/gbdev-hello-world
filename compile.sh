set -e
echo rgbasm
../rgbds/rgbasm -o electronoob.o -i./includes/ girl.asm
echo rgblink
../rgbds/rgblink -o electronoob.gb electronoob.o
echo rgbfix
../rgbds/rgbfix -p0 -v ./electronoob.gb
echo bgb - wine
#wine ../bgb.exe -rom electronoob.gb -headless -runfast -br "/TOTALCLKS>=ce7d50/"
#wine ../bgb.exe -rom electronoob.gb -headless -runfast -br "/ZEROCLKS/,/LASTCLKS>=200000/"
#convert -delay 3 -loop 0 *.bmp animated.gif
#./imgcat animated.gif
#rm *.bmp
#rm *.gif
