/*
23.DiseñarunprogramaenCnecesarioparaquehabiéndoseleídoelvalorde
2variablesNUM1yNUM2seintercambienlosvaloresdelasvariables,esdecir
queelvalorqueteníaNUM1ahoralocontengaNUM2yviceversa
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, aux;
    printf("Ingresa un numero: \n");
    scanf("%d", &num1);
    printf("Ingresa otro numero: \n");
    scanf("%d", &num2);
    printf("El primero vale %d: \n", num1);
    printf("El segundo vale %d: \n", num2);
    aux = num1;
    num1 = num2;
    num2 = aux;
    printf("VALORES CAMBIADOS \n");
    printf("El primero vale %d \n", num1);
    printf("El segundo vale %d \n", num2);

    return 0;
}