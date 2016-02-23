/**
* @brief Modulo del apartado a) del ejercicio 8
*
* Programa que devuelve el tamanio de su ejecutable mediante el comando du
*
*
* @file ejercicio8a.c
* @author Pablo Marcos Manchon <pablo.marcosm@estudiante.uam.es>
* @author David Nevado Catalan <david.nevadoc@estudiante.uam.es>
* @version 1.0
* @date 23-02-2016
*/


#include <stdlib.h>
#include <stdio.h>

/**
* @brief main del programa del ejercicio 8a
* @return no devuelve nada en caso de exito y EXIT_FAILURE en caso contrario
*/
void main(void){
    printf("A continuacion se  muestra tamano de este ejecutable:\n");
    /*Ejercutamos el comando du*/ 
    execlp("du","du","-sh", "ejercicio8a", NULL);
    
    /*Si hay un error en execlp*/
    perror("No pudo ejecutarse el comando\n");
    exit(EXIT_FAILURE);
}
