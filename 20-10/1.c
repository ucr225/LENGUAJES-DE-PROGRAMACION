#include <windows.h>
#include <stdio.h>

BOOL WINAPI ConsoleHandler(DWORD signal) {

    if (signal == CTRL_C_EVENT)
        printf("Ctrl-C handled\n"); //Aqui puedes poner lo que quieras hacer cuando se presione Ctrl+C

    return TRUE;
}

int main()
{
    if (!SetConsoleCtrlHandler(ConsoleHandler, TRUE)) {
        printf("\nERROR: No se pudo establecer el controlador de la consola! \n");
        return EXIT_FAILURE;
    }

    printf("\nEl controlador de la consola está activado.\n");
    printf("Intenta presionar Ctrl+C para ver cómo se maneja.\n");

       char vendedores[100][100];
    int articulos[100][3];
    int cantidad;
    
    printf("Ingrese la cantidad de vendedores \n");
    scanf("%d", &cantidad);
    printf("\n----------------------------------\n");

    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingresa el nombre %d: ", i + 1);
        scanf("%s", vendedores[i]);
        printf("\n");
    }
    printf("\n====================================================================================================\n");

    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingresa la cantidad de productos tipo %d vendidos para el vendedor  NUMERO #%d: ", j + 1, i + 1);
            scanf("%d", &articulos[i][j]);
        }
        printf("\n----------------------------------\n");
    }
    printf("\n====================================================================================================\n");

    printf("--- VALORES INGRESADOS ====> \n");

    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Productos tipo  # %d vendidos para el vendedor %s : %d \n", j + 1, vendedores[i], articulos[i][j]);
        }
        printf("\n----------------------------------\n");
    }
    printf("\n====================================================================================================\n");
    printf("\n====SUMATORIA DE ARTICULOS VENDIDOS PARA CADA VENDEDOR =====\n");


    //getche();
    return EXIT_SUCCESS;
}
