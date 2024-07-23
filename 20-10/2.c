
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    // Declaración de los vectores y variables
    float numeros[20];
    float negativos[20];
    float positivos[20];
    int nega = 0, posi = 0;

    // Bucle para pedir al usuario que introduzca los números
    for (int i = 0; i < 20; i++)
    {
        printf("Ingrese un numero para la posicion %d :", i + 1);
        scanf("%f", &numeros[i]);
        // Si el número es positivo o cero, se añade al vector de positivos
        if (numeros[i] >= 0)
        {
            positivos[posi++] = numeros[i];
        }
        // Si el número es negativo, se añade al vector de negativos
        else
        {
            negativos[nega++] = numeros[i];
        }
    }
    printf("\n");
    //printf("%d\n", posi); // Imprime la cantidad de números positivos
    //printf("%d\n", nega); // Imprime la cantidad de números negativos
    printf("\n");

    // Bucle para imprimir los números negativos
    for (int i = 0; i < nega; i++)
    {
        printf(" Numero negativo numero %d : %.1f", i + 1, negativos[i]);
        printf("\n");
    }
    printf("--------------------------------");
    printf("\n");
    // Bucle para imprimir los números positivos
    for (int i = 0; i < posi; i++)
    {
        printf(" Numero positivo numero %d : %.1f", i + 1, positivos[i]);
        printf("\n");
    }

    getche(); // Espera a que el usuario presione una tecla antes de cerrar el programa
}
