#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    // ESTA CARGANDO UNA MATRIZ!!!!!
    int numeros[3][3];
    // cargar una matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingresa un numero para la fila %d y la columna %d : \n", i + 1, j + 1);
            scanf("%d", &numeros[i][j]);
        }
    }
    // imprimir una matriz
    printf("La matriz ingresada: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d | ", numeros[i][j]);
        }
        printf("\n");
    }

    getche();
}