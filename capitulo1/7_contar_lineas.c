/*
    Curso C Libro Kernighan & Ritchie
    programa flujo de datos de entrada y salida

    capitulo1, variables, expresiones, interacciones y decisiones
    herramientas: contar lineas; sentencia if
*/

#include <stdio.h>
//copiar la entrada a la salida

main(){
    int c,nl;

    nl=0;
    while((c=getchar())!=EOF)
        if (c=='\n')
            ++nl;
    printf("%ld\n",nl);
}