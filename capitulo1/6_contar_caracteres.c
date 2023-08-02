/*
    Curso C Libro Kernighan & Ritchie
    programa flujo de datos de entrada y salida

    capitulo1, variables, expresiones, interacciones y decisiones
    herramientas: contar caracteres
*/

#include <stdio.h>
//copiar la entrada a la salida

main(){
    long nc;
    nc=0;

    while(getchar()!=EOF)
        ++nc;

    printf("%ld\n",nc);
}