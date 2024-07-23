#include <conio.h>
#include <stdio.h>
#include <ctype.h>
// PROGRAMA QUE SIMULA UN TABLERO DE AJEDREZ
main()
{
    char tablero[8][8];
    int i, j, fila, filas, numeros[8] = {8, 7, 6, 5, 4, 3, 2, 1}, espacios;
    char columna, otro;
    int k, mov = 0, BN;
    // para saber si es la primera vez que el jugar juega
    int bandera = 0;
    // variables para capturar
    int op, direccion;
    printf("\nBienvenido al juego de ajedrez");
    printf("\nLas fichas en  minuscula son las fichas blancas");
    printf("\nLas fichas en  mayuscula son las fichas negras");
    printf("\n\n");
    

    printf("      TABLERO DE AJEDREZ\n\n");
    // imprimiendo la matriz
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            // IMPRIMIENDO LOS PEONES
            if (i == 1)
            {
                tablero[1][j] = 'P';
            }
            else if (i == 6)
            {
                tablero[6][j] = 'p';
            }
            // IMPRIMIENDO LAS TORRES
            else if ((i == 0 && j == 0) || (i == 0 && j == 7))
            {
                tablero[i][j] = 'T';
            }
            else if ((i == 7 && j == 0) || (i == 7 && j == 7))
            {
                tablero[i][j] = 't';
            }
            // IMPRIMIENDO LOS CABALLOS
            else if ((i == 0 && j == 1) || (i == 0 && j == 6))
            {
                tablero[i][j] = 'C';
            }
            else if ((i == 7 && j == 1) || (i == 7 && j == 6))
            {
                tablero[i][j] = 'c';
            }
            // IMPRIMIENDO LOS ALFILES
            else if ((i == 0 && j == 2) || (i == 0 && j == 5))
            {
                tablero[i][j] = 'A';
            }
            else if ((i == 7 && j == 2) || (i == 7 && j == 5))
            {
                tablero[i][j] = 'a';
            }
            // IMPRIMIENDO LA REINA
            else if ((i == 0 && j == 3))
            {
                tablero[i][j] = 'M';
            }
            else if ((i == 7 && j == 3))
            {
                tablero[i][j] = 'm';
            }
            // PARA EL REY
            else if ((i == 0 && j == 4))
            {
                tablero[i][j] = 'R';
            }
            else if ((i == 7 && j == 4))
            {
                tablero[i][j] = 'r';
            }
            else
            {
                tablero[i][j] = ' ';
            }
        }
    }

    for (i = 0; i < 8; i++)
    {
        printf("%d", numeros[i]);
        printf("  ");
        for (j = 0; j < 8; j++)
        {
            printf("  %c  ", tablero[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("     a    b    c    d    e    f    g    h\n");

    do
    {
        printf("\n  Digite una opcion: ");
        printf("\n      1-Mover un peon");
        printf("\n      2-Capturar una pieza\n");
        scanf("%d", &op);
        printf("\n-Cual ficha quiere mover? ");
        if (op == 1)
        {
            do
            {
                printf("\nSolo puede mover los peones, se encuentran en las filas 2 y 7");
                printf("\nIngrese la fila: ");
                scanf("%d", &fila);

            } while (fila != 2 && fila != 7);

            do
            {
                printf("\nSolo puede mover los peones que se encuentran en las columnas D y E");
                printf("\nIngrese la columna: ");
                scanf(" %c", &columna);
            } while (columna != 'd' && columna != 'D' && columna != 'e' && columna != 'E');

            printf("\nCuantos espacios quiere mover el peon (1 o 2)?");
            scanf("\n%d", &espacios);
        }
        else
        {
            printf("\nIngrese la fila: ");
            scanf("%d", &fila);
            printf("\nIngrese la columna: ");
            scanf(" %c", &columna);
            printf("\nIngrese la dirección de la captura: ");
            printf("\n1-Izquierda");
            printf("\n2-Derecha\n");
            scanf("%d", &direccion);
        }
        filas = 8 - fila;
        if (columna == 'a' || columna == 'A')
        {
            k = 0;
        }
        if (columna == 'b' || columna == 'B')
        {
            k = 1;
        }
        if (columna == 'c' || columna == 'C')
        {
            k = 2;
        }
        if (columna == 'd' || columna == 'D')
        {
            k = 3;
        }
        if (columna == 'e' || columna == 'E')
        {
            k = 4;
        }
        if (columna == 'f' || columna == 'F')
        {
            k = 5;
        }
        if (columna == 'g' || columna == 'G')
        {
            k = 6;
        }
        if (columna == 'h' || columna == 'H')
        {
            k = 7;
        }

        if (isupper(tablero[filas][k]))
        {
            /*
            printf("\nES UNA FICHA NEGRA");*/
            mov = 1;
        }
        if (islower(tablero[filas][k]))
        {
            /*
            printf("\nES UNA FICHA BLANCA");*/
            mov = 0;
        }

        if (op == 1 && mov == 0)
        {
            if (espacios == 1)
            {
                tablero[filas - 1][k] = tablero[filas][k];
                tablero[filas][k] = ' ';
            }
            if (espacios == 2)
            {
                tablero[filas - 2][k] = tablero[filas][k];
                tablero[filas][k] = ' ';
            }
        }
        if (op == 1 && mov == 1)
        {
            if (espacios == 1)
            {
                tablero[filas + 1][k] = tablero[filas][k];
                tablero[filas][k] = ' ';
            }
            if (espacios == 2)
            {
                tablero[filas + 2][k] = tablero[filas][k];
                tablero[filas][k] = ' ';
            }
        }

        if (op == 2 && mov == 0)
        {
            if (direccion == 1)
            {
                tablero[filas - 1][k - 1] = tablero[filas][k];
                tablero[filas][k] = ' ';
            }

            if (direccion == 2)
            {
                tablero[filas - 1][k + 1] = tablero[filas][k];
                tablero[filas][k] = ' ';
            }
        }

        if (op == 2 && mov == 1)
        {
            if (direccion == 1)
            {

                tablero[filas + 1][k - 1] = tablero[filas][k];
                tablero[filas][k] = ' ';
            }
            if (direccion == 2)
            {
                tablero[filas + 1][k + 1] = tablero[filas][k];
                tablero[filas][k] = ' ';
            }
        }
        /*
        if (op==1 && mov==1)
        {
             if (direccion==1)
            {
             k--;
            } if (direccion==2)
            {
             k++;
            }
        }*/

        for (i = 0; i < 8; i++)
        {
            printf("%d", numeros[i]);
            printf("  ");
            for (j = 0; j < 8; j++)
            {
                printf("  %c  ", tablero[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("     a    b    c    d    e    f    g    h\n");

        printf("Quiere mover otro peon? (S/N)");
        scanf(" %c", &otro);

    } while (otro == 's' || otro == 'S');
    getche();
}