/*
    Curso C Libro Kernighan & Ritchie
    programa flujo de datos de entrada y salida

    capitulo1, variables, expresiones, interacciones y decisiones
    herramientas: getchar, putchar
*/

#include <stdio.h>

main(){
    int c;

    c=getchar();
    while(c!=EOF){
        putchar(c);
        c=getchar();
    }
}