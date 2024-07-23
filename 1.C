/**
1.Ingresar 5 números y calcular su media-

 **/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
    float num;
    int i=0;
    float media=0;
    float total=0;
    while (i<5)
    {
        printf("Ingrese un numer: \n");
        scanf("%f",&num);
        media += num;
    i++;
    }

    total=media/5;
    printf("Total: %.2f\n", total);
    getche();
}

