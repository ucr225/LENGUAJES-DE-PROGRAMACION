#include <stdio.h>

void imprimirTableroAjedrez()
{
    int i, j;
    // Imprime la línea superior del tablero
    printf("| - - - - - - - - - - - - - - - |\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            // Imprime el borde izquierdo de cada celda
            printf("| ");
            // Imprime un espacio en blanco para todas las casillas
            printf("  ");
        }
        // Imprime el borde derecho de la última celda y pasa a la siguiente línea
        printf("|\n");
        // Imprime una línea de separación entre las filas
          printf("| - - - - - - - - - - - - - - - |\n");

    }
}

int main()
{
    // Llama a la función para imprimir el tablero de ajedrez
    imprimirTableroAjedrez();
    return 0;
}
