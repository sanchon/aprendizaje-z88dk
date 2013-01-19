#!/bin/sh

#quitamos la extension, para crear el .tap y le llamamos SE (SinExtension)
SE=`basename $1 .c`

#compilacion
zcc +zx -lndos -lm -create-app -Cz-o -Cz$SE.tap -o $SE.bin $1


