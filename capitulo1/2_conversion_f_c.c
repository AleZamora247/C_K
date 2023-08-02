/*
    Curso c Libro Kernighan & Ritchie
    programa de conversion de Farenheit a celsius 

    capitulo1, variables, expresiones e iteraciones
*/
#include <stdio.h>
// imprime la tambla de F-C para fahr=0,20, ...,300

main(){
    //Definir variables
    int fahr,celsius;
    int lower,upper,step;
    
    //inisilaizacion 
    lower=0;
    upper=300;
    step=20;

    fahr = lower;

    //bucle de conversion fahr cels
    while(fahr<=upper){
        celsius=5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr=fahr+step;
    }

}