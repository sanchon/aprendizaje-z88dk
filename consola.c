
#include <stdio.h>

void salidaPorConsola()
{

        //el driver de consola soporta bastantes cosas
	// ver: http://www.z88dk.org/wiki/doku.php?id=platform:zx#the_standard_zx_spectrum_console_driver
	
	// se puede borrar la pantalla
	printf("\xC");
	
	// se soportan 32 o 64 columnas
	//printf("\x1\x20");              // 32 column mode (1, 32)
	//printf("Hola! Texto en modo 32 columnas\n");
	//printf("\x1\x40");              // 64 column mode (1, 64)
	//printf("Hola mundillo! Texto en modo 64 columnas\n");
	printf("012345678901234567890123456789012345678901234567890");
	
}
