/**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
main()
{
    float matrizA[4][4] = {
        {2, -1, 4, 0}, {1, 2, -1, 3}, {5, 2, -1, 4}, {8, 9, 10, 1}};
    // float matrizB[4][4];
    float diagonal = 0;
    printf("ESTIMADO USUARIO,A CONTINUACION SE VA A IMPRIMIR LA MATRIZ 4X4\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %0.f  ", matrizA[i][j]);
        }
        printf("\n");
    }
    printf(" LA MATRIZ TRASPUESTA ES: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %0.f  ", matrizA[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    // para sumar la diagonal!!
    for (int i = 0; i < 4; i++)
    {
        diagonal += matrizA[i][i];
    }
    printf("\n");
    printf(" LA SUMA DE SU DIAGONAL ES: %0.f\n", diagonal);
    return 0;
}

/*#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/