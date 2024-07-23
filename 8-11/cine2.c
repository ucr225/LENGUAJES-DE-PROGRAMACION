#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
// PROTOTIPOS DE FUNCIONES  ---ESTE SI ES 
void imprimir(int x[25][4]);
void cambio(int x, int y, int z[25][4]);
void cancelacion(int x, int y, int z[25][4]);
int todos(int z[25][4]);

int main()
{
    signal(SIGINT, SIG_IGN);
    int cine[25][4] = {0}, cantidad, cantidad2, fila, columna, cancelar;
    char repit, repit2;
    printf("-------BIENVENIDO AL SISTEMA DE RESERVACION---------- \n");
    printf("A CONTINUACION SE MUESTRA LA DISTRIBUCION DE LOS ASIENTOS DISPONIBLES DEL CINE \n");
    imprimir(cine);

    printf("A CONTINUACION PROCEDA A RESERVAR UN ASIENTO \n");

    while (repit != 'N')
    {
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

        printf("QUIERE RESERVAR OTRO ASIENTO? \n De lo contrario,pulse N para no reservar mas asientos y cualquier letra para reservar mas puestos: ");
        getchar();
        repit = getchar();      // read the faculty character
        repit = toupper(repit); // convert to uppercase
    }
    system("cls");
    printf("QUIERE CANCELAR ALGUN ASIENTO?\n PULSE 1 PARA CANCELAR ALGUN ASIENTO\nPULSE 2 PARA NO CANCELAR NINGUN ASIENTO,VER EL STATUS ACTUAL DE DIPONIBILIDAD Y SALIR DEL PROGRAMA\n");
    scanf("%d", &cancelar);
    while (cancelar > 2 || cancelar < 1)
    {
        printf("INGRESE UNA OPCION VALIDA\n");
        scanf("%d", &cancelar);
    }
    if (cancelar == 1)
    {
        printf("USTED SELECCIONO LA OPCION DE CANCELAR UN ASIENTO,A CONTINUACION SE LE VA A MOSTRAR LOS ASIENTOS RESERVADOS\n");
        imprimir(cine);
        while (repit2 != 'N' && !todos(cine))
        {
            while (1)
            {
                printf("Seleccione que fila quiere  cancelar:\n");
                scanf("%d", &fila);
                while (fila < 1 || fila > 25)
                {
                    printf("Ingrese una fila valida \n");
                    scanf("%d", &fila);
                }
                printf("Seleccione que columna quiere cancelar: \n");
                scanf("%d", &columna);
                while (columna < 1 || columna > 4)
                {
                    printf("Ingrese una columna valida \n");
                    scanf("%d", &columna);
                }
                if (cine[fila - 1][columna - 1] == 0)
                {
                    printf("Este asiento no tiene reserva. Por favor, seleccione otro que si tenga una!\n");
                }
                else
                {
                    break;
                }
            }
            system("cls");
            cancelacion(fila, columna, cine);
            imprimir(cine);

            printf("QUIERE RESERVAR OTRO ASIENTO? \n De lo contrario,pulse N para no reservar mas asientos y cualquier letra para reservar mas puestos: ");
            getchar();
            repit2 = getchar();       // read the faculty character
            repit2 = toupper(repit2); // convert to uppercase
            todos(cine);
        }
    }
    else
    {
        system("cls");
        printf("ESTOS SON LOS ASIENTOS RESERVADOS!\n");
        imprimir(cine);
        printf("GRACIAS POR RESERVAR CON NOSOTROS,HASTA LUEGO!!\n");
    }

    getche();
}

void imprimir(int x[25][4])
{
    printf("     ============PANTALLA=============\n");
    printf("      ");
    for (int j = 0; j < 4; j++)
    {
        printf("   %d   ", j + 1);
    }
    printf("\n");

    for (int i = 0; i < 25; i++)
    {
        if (i < 9)
        {
            printf(" %d  ", i + 1);
        }
        else
        {
            printf("%d  ", i + 1);
        }

        for (int j = 0; j < 4; j++)
        {
            printf("    |%d| ", x[i][j]);
        }
        printf("\n");
    }
}

void cambio(int x, int y, int z[25][4])
{
    z[x - 1][y - 1] = 1;
}
void cancelacion(int x, int y, int z[25][4])
{
    z[x - 1][y - 1] = 0;
}
int todos(int z[25][4])
{
    int todos_ceros = 1; // Asumimos que todos son ceros hasta que se demuestre lo contrario
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (z[i][j] != 0)
            {
                todos_ceros = 0; // Encontramos un elemento que no es cero
                break;
            }
        }
        if (!todos_ceros)
        {
            break;
        }
    }

    if (todos_ceros)
    {
        printf("YA TODOS LOS ASIENTOS ESTAN DISPONIBLES,YA NO PUEDE CANCELAR NINGUN ASIENTO ADICIONAL!!\n");
        printf("GRACIAS POR RESERVAR CON NOSOTROS,HASTA LUEGO!!\n");
    }
    return todos_ceros;
}
