/*
31.Hacer un programa en C que luego de ingresar 2 números por teclado,
imprima los números naturales que hay entre ambos empezando por el más
pequeño, contar cuántos números hay y cuántos de el los son pares
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    int numero1, numero2, pares;
    printf("Ingrese un numero: \n");
    scanf("%d", &numero1);
    printf("Ingrese un numero 2,debe ser mayor: \n");
    scanf("%d", &numero2);
    while (numero2 < numero1)
    {
        printf("Ingrese un numero valido,debe ser mayor: \n");
        scanf("%d", &numero2);
    }
    printf("\n");
    for ( int i = numero1; i <= numero2; i++)
    {
        printf("%d \n", i);
        if (i % 2 == 0)
        {
            pares++;
        }
    }
    printf(" Hay %d numeros pares \n",pares);
    printf(" Hay %d numeros entre el primer numero y el segundo \n",numero2-numero1);
    return 0;
}