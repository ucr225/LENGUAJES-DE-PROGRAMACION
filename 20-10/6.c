/*
sumar las matrices A y B ambas de dimension 10*4
dejarla en C e imprimirla
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    float a[10][4];
    float b[10][4];
    float c[10][4];
    char nombre[10];

    printf("Ingresa tu nombre: \n");
    scanf("%s", nombre);
    printf("%s\n", nombre);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Ingrese el numero: ");
            scanf("%f", &a[i][j]);
        }
    }
    printf("MATRIZ A: \n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f   |", a[i][j]);
        }

        printf("\n");
        printf("\n");
        printf("\n");
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Ingrese el numero para la segunda matriz: ");
            scanf("%f", &b[i][j]);
        }
    }
    printf("MATRIZ B: \n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f   |", b[i][j]);
        }

        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("MATRIZ C (A+B): \n");
    for (int i = 0; i < 10; i++)

    {
        for (int j = 0; j < 4; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f   |", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}
