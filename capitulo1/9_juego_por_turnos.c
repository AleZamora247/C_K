// Ejercicio #1 del curso de Mastermind: El lenjuage de programacion C - Kernighan y Ritchie

#include <stdio.h>
#include <stdlib.h>

main(){
    system('cls');
    printf('Gana a la maquina\nDescubre la letra correcta\nNo se permite minusculas ni otros caracteres');
    int nb;
    char lu,lb;
    nb=0;
    srand(time(NULL));
    //numeros aleatorios
    int nv=((rand()%26)+17);

    char lv=nv+'0';

    while(lu!=lv||lb!=lv){
        printf("Es tu turno escribe tu respuesta y pulsaa Enter:\n");
        lu=getchar();
            
            if(lu==lv){
                printf("\nFelicidades has ganado, la letra correcta era: %e\n");
                system("pause");
                return 0;
            }
            else if(lu>lv){
                printf("\nTu letra: %c \nEs mayor que la letra verdadera\nSigue intentando\nIntenta de nuevo: ",lu);
            }
            else if(lu<lv){
                printf("\nTu letra: %c \nEs menor que la letra verdadera\nSigue intentando\nIntenta de nuevo: ",lu);
            }
        getchar();
        getchar();
        printf("El bot escribe su respuesta: \n");
        int nb=((rand()%26)+17);
        char lb=nb+'0';
        printf("%c\n\n",lb);
            if(lb==lv){
                printf("Has perdido, la letra del bot es: %c\nEL bot hacerto la letra verdadera %c\n\n",lb,lv);
            }
    }
    system("pause");
    return 0;

}
