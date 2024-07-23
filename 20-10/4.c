/*
ingresar elementos numericos de una matriz 20*20
por filas

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main(){
    int matriz[19][19];

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            printf("Ingrese el elemento para la fila %d  y la columna %d \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }
    printf("----------LA MATRIZ: -------------\n");
        for (int i = 0; i <19 ; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            printf(" %d|",matriz[i][j]);
        }
        printf("\n");
    }

    getche();
}

// POR COLUMNAS
/*
int main(){
    int matriz[19][19];

    for (int j = 0; j < 19; j++)
    {
        for (int i = 0; i < 19; i++)
        {
            printf("Ingrese el elemento para la fila %d  y la columna %d \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }
    printf("----------LA MATRIZ: -------------\n");
        for (int i = 0; i <19 ; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            printf(" %d|",matriz[i][j]);
        }
        printf("\n");
    }

    getche();
}

*/