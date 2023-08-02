/*
    Curso C Libro Kernighan & Ritchie
    programa flujo de datos de entrada y salida

    capitulo1, variables, expresiones, interacciones y decisiones
    herramientas: contar palabras, if else, define
*/

#include <stdio.h>
//copiar la entrada a la salida
#define IN 1 // esta dentro de la palabra 
#define OUT 0 // esta fuera de la palabra

main(){
    int c,nl,nw,nc,state;

    state=OUT;
    nl=nw=nc=0;
    while((c=getchar())!=EOF){
        ++nc;
        if(c=='\n')
            ++nl;
        if(c==' '||c=='\n'||c=='\t')
            state=OUT;
        else if(state==OUT){
            ++nw;
            state=IN;
        }
        
    }
    printf("%d %d %d\n",nl,nw,nc);
}