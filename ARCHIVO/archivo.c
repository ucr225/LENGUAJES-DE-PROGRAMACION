

/*Escribe un programa en C que realice una investigación crediticia utilizando un archivo de datos de clientes.
El programa debe permitir al usuario seleccionar diferentes consultas, como listar las cuentas con saldo cero,
las cuentas con saldo a favor o las cuentas con saldo en contra. El programa debe leer los datos del archivo de clientes
y mostrar los resultados de la consulta seleccionada.
El usuario debe poder realizar múltiples consultas hasta que decida finalizar el programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <ctype.h>

void consulta(int opcion);

int main()
{
    char opcion[3];
    int opcionInt;
    signal(SIGINT, SIG_IGN);
    do
    {
        printf("==========BIENVENIDO ESTIMADO USUARIO=======\nA CONTINUACION, SE MUESTRAN LAS OPCIONES DE CONSULTA\n\n");
        printf("1.          Conocer cuentas con saldo cero\n");
        printf("2.          Obtener cuentas con saldo a favor\n");
        printf("3.          Generar cuentas con saldo en contra\n");
        printf("4.          Salir\n");
        printf("                    POR FAVOR INGRESA UNA OPCION VALIDA: ");
        fgets(opcion, 3, stdin);

        if (opcion[0] == '\n' || opcion[0] == '0' || strchr(opcion, ' ') != NULL)
        {
            system("cls");
            printf("Entrada inválida. Por favor, intenta de nuevo.\n");
            continue;
        }

        opcionInt = atoi(opcion);
        if (opcionInt < 1 || opcionInt > 4)
        {
            printf("Opción inválida. Por favor, seleccione una opción del 1 al 4.\n");
            continue;
        }

        if (opcionInt >= 1 && opcionInt <= 3)
        {
            consulta(opcionInt);
        }
    } while (opcionInt != 4);

    if (opcionInt == 4)
    {
        system("cls");
        printf("Saliendo... \n");
        system("pause");
    }
    getche();
}

void consulta(int opcion)
{
    FILE *file = fopen("info.txt", "r");
    if (file == NULL)
    {
        printf("No se pudo abrir el archivo de clientes.\n");
        return;
    }
    system("cls");
    char nombre[100];
    float saldo;
    while (fscanf(file, "%[^,],%f\n", nombre, &saldo) != EOF)
    {
        switch (opcion)
        {
        case 1:
            if (saldo == 0)
                printf("Nombre que posee el cliente: %s, Saldo existente: %.2f\n", nombre, saldo);
            break;
        case 2:
            if (saldo > 0)
                printf("Nombre que posee cliente: %s, Saldo existente: %.2f\n", nombre, saldo);
            break;
        case 3:
            if (saldo < 0)
                printf("Nombre que posee el cliente: %s, Saldo existente: %.2f\n", nombre, saldo);
            break;
        }
    }
    fclose(file);
    system("pause");
    system("cls");
}