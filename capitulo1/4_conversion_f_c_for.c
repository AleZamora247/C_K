/*
    Curso c Libro Kernighan & Ritchie
    programa de conversion de Farenheit a celsius 

    capitulo1, variables, expresiones e iteraciones
*/
#include <stdio.h>
// imprime la tambla de F-C para fahr=0,20, ...,300

main(){
    //Definir variables
    int fahr;

    //bucle de conversion fahr cels
    for(fahr=0;fahr<=300;fahr=fahr+20){
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }

}