
#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include "sysvars.h"

#define HEAPSIZE 2000 

void reservarMemoria()
{
        // ===============================
        // variables variadas
        char *textoprueba; 
        unsigned int heap_total;
 	unsigned int heap_largest;
        // ===============================

	mallinit(); //hay que vaciar/inicializar la pila

	//ahora hay que coger un trozo de la memoria y reservarlo para la pila
        //opino que lo elegante es pillar los HEAPSIZE bytes inmediatamente inferiores a UDG
	
	
	printk("El valor de UDG es: %u\n", *udg_ptr);
	printf("Pillamos desde  %u\n", *udg_ptr-HEAPSIZE-1);
        sbrk(*udg_ptr - HEAPSIZE - 1, HEAPSIZE);

	//vamos a obtener informacion sobre la pila
	mallinfo(&heap_total, &heap_largest);	
	printf("Heap Total: %u\n", heap_total);
        printf("Heap Largest Available block: %u\n", heap_largest);

        //probemos a pillar unos bytes para una variable
        textoprueba=(char *)malloc(30);

        //a ver si podemos meter algo ahí...
	strcpy(textoprueba, "holahola");
	printf("El texto esta en la direccion %u\n", textoprueba);
}
