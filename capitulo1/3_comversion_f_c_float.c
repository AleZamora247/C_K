/*
    Curso c Libro Kernighan & Ritchie
    programa de conversion de Farenheit a celsius 

    capitulo1, variables, expresiones e iteraciones
*/
#include <stdio.h>
// imprime la tambla de F-C para fahr=0,20, ...,300

main(){
    //Definir variables
    float fahr,celsius;
    float lower,upper,step;
    
    //inisilaizacion 
    lower=0;
    upper=300;
    step=20;

    fahr = lower;

    //bucle de conversion fahr cels
    while(fahr<=upper){
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.2f\n",fahr,celsius);
        fahr=fahr+step;
    }

}