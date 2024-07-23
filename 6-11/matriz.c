#include <ctype.h> //obligatorio
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
int esEntero(char *cadena)
{
    int arbitro, menos = 0;
    int longitud;
    int borrar;
    int soloCeros = 1;
    char *punto = strchr(cadena, '.');
    longitud = strlen(cadena);

    if (longitud == 0 || cadena[0] == '\0')
    {
        printf("ESTIMADO USUARIO,NO INGRESO NINGUN VALOR! \n");
        usleep(1500000);
        system("cls");
        fflush(stdin);

        return arbitro = 0;
    }

    if (cadena[0] == '-')
    {
        menos++;
    }

    for (int i = menos; i < longitud; i++)
    {
        if (longitud == 1 && cadena[i] == '0')
        {
            return arbitro = 1;
        }

        if (!isdigit(cadena[i]) || (cadena[0] == '0' && menos == 0) || longitud > 4 || cadena[0] == ' ' || cadena[longitud - 1] == ' ' || longitud == 0 || menos > 1)
        {
            system("cls");
            fflush(stdin);
            return arbitro = 0;
        }
    }

    return arbitro = 1;
}

int main()
{

    int A[5][5], B[5][5], C[5][5], valido = 0, longitud;
    char cadena[100][100], cadena2[100][100];
    // Guardar el estado actual del programa
    signal(SIGINT, SIG_IGN);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            valido = 0; // esto es para reiniciar el valor cada vez que un valor nuevo se meta en los articulos
            while (valido != 1)
            {
                printf("Ingrese un numero  para la matriz A,posicion %d %d\n", i, j);
                gets(cadena[i]); // USAR SIEMPRE!!
                longitud = strlen(cadena[i]);

                fflush(stdin);

                if (esEntero(cadena[i])) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
                {
                    A[i][j] = atoi(cadena[i]); // enteros MUCHO mas grandes
                    valido = 1;
                }
                else
                {
                    printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
                    fflush(stdin);
                    valido = 0; // como es invalido se vuelve a pedir hasta que sea valido
                }
            }
        }
        printf("\n----------------------------------\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            valido = 0; // esto es para reiniciar el valor cada vez que un valor nuevo se meta en los articulos
            while (valido != 1)
            {
                printf("Ingrese un numero  para la matriz B,posicion %d %d\n", i, j);
                gets(cadena2[i]); // USAR SIEMPRE!!
                longitud = strlen(cadena2[i]);

                fflush(stdin);

                if (esEntero(cadena2[i])) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
                {
                    B[i][j] = atoi(cadena2[i]); // enteros MUCHO mas grandes
                    valido = 1;
                }
                else
                {
                    printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
                    fflush(stdin);
                    valido = 0; // como es invalido se vuelve a pedir hasta que sea valido
                }
            }
        }
        printf("\n----------------------------------\n");
    }

    system("cls");
    // Imprimir matrices
    printf("MATRIZ NUMERO 1 \n \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("|   %d     | ", A[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ NUMERO 2 \n \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("|   %d     | ", B[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("RESPUESTA\n \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("|   %d     | ", C[i][j]);
        }
        printf("\n");
    }

    getche();
}
