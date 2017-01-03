set -e
echo rgbasm
rgbasm -o electronoob.o -i./includes/ e4.asm
echo rgblink
rgblink -o electronoob.gb electronoob.o
echo rgbfix
rgbfix -p0 -v ./electronoob.gb
echo bgb - wine

wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_0.bmp -br "/TOTALCLKS>=b55000/"
wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_1.bmp -br "/TOTALCLKS>=b61350/"
wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_2.bmp -br "/TOTALCLKS>=b6d6a0/"
wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_3.bmp -br "/TOTALCLKS>=b799f0/"
wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_4.bmp -br "/TOTALCLKS>=b85d40/"
wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_5.bmp -br "/TOTALCLKS>=b92090/"
wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_6.bmp -br "/TOTALCLKS>=b9e3e0/"
wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_7.bmp -br "/TOTALCLKS>=baa730/"
wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_8.bmp -br "/TOTALCLKS>=bb6a80/"
wine ../bgb.exe -rom electronoob.gb -headless -runfast -screenonexit foo_9.bmp -br "/TOTALCLKS>=bc2dd0/"

convert -delay 20 -loop 0 foo_{0..9}.bmp animated.gif
./imgcat animated.gif
rm *.bmp
