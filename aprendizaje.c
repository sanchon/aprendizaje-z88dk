/*     
 *      ============================================
 *	Un programa para aprender z88dk y Spectranet
 *	============================================ 
 */


#define __MAIN_C

#include <malloc.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>

//cosas comunes a todo el proyecto
#include "aprendizaje.h"

//en sysvars.c meto las variables del sistema
#include "sysvars.h" 


// -------------------------------------------------------------------
// para MALLOC:
long heap; //hay que declarar el heap al más alto nivel
// -------------------------------------------------------------------

main()
{

        salidaPorConsola(); 

	reservarMemoria();

}




