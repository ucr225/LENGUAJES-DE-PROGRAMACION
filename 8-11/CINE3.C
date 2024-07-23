#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define FILAS 25
#define COLUMNAS 4

int asientos[FILAS][COLUMNAS];

void mostrar_asientos()
{
    int i, j;
    printf("Estado actual de los asientos:\n");
    for (i = 0; i < FILAS; i++)
    {
        for (j = 0; j < COLUMNAS; j++)
        {
            printf("[%d]", asientos[i][j]);
        }
        printf("\n");
    }
}

void reservar_asiento()
{
    int fila, columna;
    printf("Ingrese la fila del asiento a reservar:\n");
    if (scanf("%d", &fila) != 1 || fila <= 0 || fila > FILAS)
    {
        printf("Error: Ingrese un numero entero positivo valido para la fila (1-%d).\n", FILAS);
        while (getchar() != '\n')
            ; // Limpiar el búfer de entrada
        return;
    }
    printf("Ingrese la columna del asiento a reservar:\n");
    if (scanf("%d", &columna) != 1 || columna <= 0 || columna > COLUMNAS)
    {
        printf("Error: Ingrese un numero entero positivo valido para la columna (1-%d).\n", COLUMNAS);
        while (getchar() != '\n')
            ; // Limpiar el búfer de entrada
        return;
    }
    if (asientos[fila - 1][columna - 1] == 1)
    {
        printf("El asiento ya esta ocupado.\n");
    }
    else
    {
        asientos[fila - 1][columna - 1] = 1;
        printf("Asiento reservado con exito.\n");
    }
}

void cancelar_asiento()
{
    int fila, columna;
    printf("Ingrese la fila del asiento a cancelar:\n");
    if (scanf("%d", &fila) != 1 || fila <= 0 || fila > FILAS)
    {
        printf("Error: Ingrese un numero entero positivo valido para la fila (1-%d).\n", 25);
        while (getchar() != '\n')
            ; // Limpiar el búfer de entrada
        return;
    }
    printf("Ingrese la columna del asiento a cancelar:\n");
    while (1) // Bucle infinito hasta que se ingrese un número válido
    {
        if (scanf("%d", &columna) == 1 && columna > 0 && columna <= 4)
        {
            break; // Si el número es válido, rompe el bucle
        }
        else
        {
            printf("Error: Ingrese un numero entero positivo valido para la columna (1-%d).\n", 4);
            while (getchar() != '\n')
                ; // Limpiar el búfer de entrada
        }
    }

    if (asientos[fila - 1][columna - 1] == 1)
    {
        asientos[fila - 1][columna - 1] = 0;
        printf("Asiento cancelado con exito.\n");
    }
    else
    {
        printf("El asiento ya está libre.\n");
    }
}

int main()
{
    int opcion;
    while (1)
    {
        printf("--------BIENVENIDO A CINES UNIDOS--------\n");
        printf("1. Reservar asiento\n");
        printf("2. Cancelar asiento\n");
        printf("3. Mostrar estado de los asientos\n");
        printf("4. Salir\n\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        system("cls");
        if (opcion < 1 || opcion > 4)
        {
            printf("Ingrese una opcion valida\n\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        if (opcion == 4)
        {
            printf("\nVuelva pronto!");
            break;
        }

        switch (opcion)
        {
        case 1:
            reservar_asiento();
            break;
        case 2:
            cancelar_asiento();
            break;
        case 3:
            mostrar_asientos();
            break;
        default:
            printf("Opción inválida.\n");
            break;
        }
    }
    return 0;
}