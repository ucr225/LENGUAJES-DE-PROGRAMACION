#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    int aux;
    int valores[5];

    for (int i = 0; i <= 5; i++)
    {
        printf("Ingresa un numero para la posicion %d : \n", i + 1);
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("Posicion %d tiene un numero ingresado: %d \n", i + 1, valores[i]);
    }

    // lo arreglamos

    // ALGORITMO METODO BURBUJA
    for (int i = 0; i < 4; i++) // el 5 se debe al numero de elementos
    {
        for (int j = 0; j < 4; j++)
        {
            if (valores[j] > valores[j + 1])
            {
                aux = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = aux;
            }
        }
    }

    printf("Orden ascendente: \n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", valores[i]);
    }
    printf("Orden descendente: \n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d \n", valores[i]);
    }

    getche();
}