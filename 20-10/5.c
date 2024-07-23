#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main(){

    int matriz[5][4];
    int min = 0, max = 0;
    int minv, maxv;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Ingrese el elemento para la fila %d y columna %d\n", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            // Inicializar min y max con el primer elemento de la matriz
            if (i == 0 && j == 0) {
                minv = matriz[i][j];
                maxv = matriz[i][j];
            }

            // Encontrar la fila con el número menor
            if (matriz[i][j] < minv) {
                minv = matriz[i][j];
                min = i;
            }

            // Encontrar la columna con el número mayor
            if (matriz[i][j] > maxv) {
                maxv = matriz[i][j];
                max = j;
            }
        }
        
    }
     printf("----------LA MATRIZ: -------------\n");
        for (int i = 0; i <5 ; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d   |",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("***FILA CON EL NUMERO MENOR***\n");
    for(int j = 0; j < 4; j++) {
        printf("%d ", matriz[min][j]);
    }
    printf("\n");

    printf("***COLUMNA CON EL NUMERO MAYOR***\n");
    for(int i = 0; i < 5; i++) {
        printf("%d \n", matriz[i][max]);
    }
    printf("\n");

    return 0;
}
