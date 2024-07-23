/*
22.Diseñar en Pseudocódigo y codificar en C un algoritmo que permita
ingresar 10 números,ninguno de ellos igual a cero.Se pide sumar los positivos,
obtener el producto de los negativos y luego mostrar ambos resultados.

*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float num[9], suma, producto = 1;

    for (int i = 0; i < 10; i++)
    {

        do
        {
            printf("Ingrese un numero diferente de cero para la posicion %d: ", i + 1);
            scanf("%f", &num[i]);

        } while (num[i] == 0);
        if (num[i] > 0)
        {
            suma += num[i];
        }
        else
        {
            producto *= num[i];
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Los numeros para la posicion %d ingresados fueron: %.2f \n", i + 1, num[i]);
    }
    printf("\n");
    printf("La suma es: %f \n", suma);
    printf("El producto es: %f \n", producto);
    getche();
}