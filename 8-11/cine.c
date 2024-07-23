/*
1.Crear un programa que mediante un menú admita reservar o cancelar asientos de una sala de cine,
así como mostrar que asientos están ocupados y libres actualmente. El array tendrá 25 filas y 4 columnas.
*/

#include <ctype.h> //obligatorio
#include <stdio.h>
#include <string.h>
#include <signal.h>

void reseteo(int x[25][4])
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            x[i][j] = 0;
        }
    }
}
void cambio(int x, int y, int z[25][4])
{
    z[x - 1][y - 1] = 1;
}

void cancelacion(int x, int y, int z[25][4])
{
    z[x-1][y - 1] = 0;	
}

void imprimir(int x[25][4])
{

    printf("     ============PANTALLA=============\n");
    // Print column numbers
    printf("      ");
    for (int j = 0; j < 4; j++)
    {
        printf("   %d   ", j + 1);
    }
    printf("\n"); 

    // Print array
    for (int i = 0; i < 25; i++)
    {
        // Adjust spacing for row numbers greater than 9
        if (i < 9)
        {
            printf(" %d  ", i + 1); // Print row number
        }
        else
        {
            printf("%d  ", i + 1); // Print row number
        }

        for (int j = 0; j < 4; j++)
        {
            printf("    |%d| ", x[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int cine[25][4] = {0}, op, cantidad, cantidad2, fila, columna, contador,filas[cantidad],columnas[cantidad];
    printf("            BIENVENIDO\n");
    printf("Estimado usuario,pulse el numero 1 para reservar un asiento,2 para cancelar la reserva,3 para borrar todos los asientos \n");
    scanf("%d", &op);
    while (op > 3 || op < 1)
    {
        printf("INGRESE UNA OPCION VALIDA\n");
        scanf("%d", &op);
    }
    system("cls");
    switch (op)
    {
    case 1:
        system("cls");
        while (contador < cantidad)
        {
            printf("A continuacion se le presenta la disponibilidad de asientos \n");
            imprimir(cine);
            while (1)
            {
                printf("Seleccione que fila quiere reservar:\n");
                scanf("%d", &fila);
                while (fila < 1 || fila > 25)
                {
                    printf("Ingrese una fila valida \n");
                    scanf("%d", &fila);
                }
                printf("Seleccione que columna quiere reservar: \n");
                scanf("%d", &columna);
                while (columna < 1 || columna > 4)
                {
                    printf("Ingrese una columna valida \n");
                    scanf("%d", &columna);
                }
                if (cine[fila - 1][columna - 1] == 1)
                {
                    printf("Este asiento ya esta reservado. Por favor, seleccione otro.\n");
                }
                else
                {
                    break;
                }
            }

            system("cls");

            cambio(fila, columna, cine);
            imprimir(cine);

            contador++;
            printf(" USTED HA RESERVADO %d ASIENTO(S)\n", contador);
        }

        break;
    case 2:
        printf(" USTED SELECCIONO CANCELAR LA RESERVA,A CONTINUACION DIGA EL NUMERO DE ASIENTOS A CANCELAR \n");
        scanf("%d", &cantidad2);
        while (cantidad2 > cantidad)
        {
            printf("Ingrese la cantidad de asientos a cancelar,el numero de cancelaciones no puede ser mayor al numero de reservas \n");
            scanf("%d", &cantidad2);
        }
        break;
    case 3:
        printf(" USTED SELECCIONO BORRAR TODOS LOS ASIENTOS \n");
        reseteo(cine);
        imprimir(cine);
        break;
    }

    getchar();
}
