/*     
 *      ============================================
 *	Un programa para aprender z88dk y Spectranet
 *	============================================ 
 */


#define __MAIN_C

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>

//cosas comunes a todo el proyecto
#include "aprendizaje.h"

//en sysvars.c meto las variables del sistema
#include "sysvars.h" 


// -------------------------------------------------------------------
// cosas para MALLOC:
// ¿cuanto espacio en la pila? pongamos 2kb de momento
#define HEAPSIZE 2000 
long heap; //hay que declarar el heap al más alto nivel
// -------------------------------------------------------------------

main()
{

        // ===============================
        // variables variadas
        char *textoprueba=NULL; 
        char *textoprueba2=NULL; 
        uint heap_total;
 	uint heap_largest;
        // ===============================
	

        salidaPorConsola(); 


        // ==========================
	// 2. Reserva dinamica de memoria
        // ==========================

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




