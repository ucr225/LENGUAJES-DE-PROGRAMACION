/*
Dado el siguiente esquema:

a) cargar simultaneamente el nombre de los vendedores en un vector y
la cantidad de articulos vendidos por vendedor en una matriz

b) sumar la cantidad de articulos por vendedor y almacenarlos en un vector

c) cual fue el vendedor que obtuvo la menor venta de articulos

d) copiar la cantidad de los articulos 1 en un vector

e) usar el ciclo while con respuesta al operador

f) validar todas las variables e imprimir los requerimientos anteriores



*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <signal.h>
#include <locale.h> //idoma
#define MAX 100
#define MAX2 18
// PRROTOTIPO DE FUNCIONES:
int esEntero(char *cadena);
int esCadena(char *cadena);
int main()
{

    char vendedores[MAX2][MAX];
    int articulos[MAX][10], ventas[MAX] = {0}, todosIguales = 1, art1[100];
    int cantidad, menor, valido1;
    int ventaToda;
    int igual;
    int valido, longitud;
    char cadena[MAX], productos[MAX], articuloss[MAX][3];
    char repit;
    signal(SIGINT, SIG_IGN);

    FILE *archivo;
    archivo = fopen("vendedores-requerimiento.txt", "w");

    if (archivo == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    while (valido != 1)
    {
        printf("Ingrese la cantidad de vendedores \n");
        gets(cadena);
        longitud = strlen(cadena);
        if (esEntero(cadena)) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
        {
            cantidad = atoi(cadena);
            if (cantidad <= MAX && cantidad >= 1)
            {
                valido = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
            }
            else
            {
                printf("NO valido,por favor ingrese un numero menor o igual a 100\n");
                printf("\n");
                fflush(stdin);
                valido = 0; // como es invalido se vuelve a pedir hasta que sea valido
            }
        }
        else
        {
            printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
            fflush(stdin);
            valido = 0; // como es invalido se vuelve a pedir hasta que sea valido
        }
    }

    printf("\n---------VENDEDORES  BIENVENIDO-----------------\n");
    // AQUI ESTOY PIDIENDO LOS NOMBRES DE LOS VENDEDORES Y VALIDANDO
    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingresa el nombre %d : ", i + 1);
        gets(vendedores[i]);
        printf("\n");
        while (!esCadena(vendedores[i]))
        {
            printf("Ingrese un nombre valido: \n");
            printf("\n");
            gets(vendedores[i]);
            vendedores[i][strcspn(vendedores[i], "\n")] = 0;
        }
        printf("\n");
    }
    printf("\n====================================================================================================\n");
    // AQUI ESTOY PIDIENDO LA CANTIADD DE PRODUCTOS VENDIDOS Y VALIDANDO

    for (int i = 0; i < cantidad; i++) // son 10 productos
    {
        for (int j = 0; j < 3; j++)
        {
            valido = 0; // esto es para reiniciar el valor cada vez que un valor nuevo se meta en los articulos
            while (valido != 1)
            {
                printf("Ingrese COSTO/MONTO DE VENTAS TOTALES (NUMERO ENTERO) de productos tipo %d vendidos para el vendedor  NUMERO #%d: ", j + 1, i + 1);
                gets(articuloss[i]);
                longitud = strlen(articuloss[i]);
                if (esEntero(articuloss[i])) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
                {
                    articulos[i][j] = atoi(articuloss[i]);
                    if (articulos[i][j] > 999 || articulos[i][j] < 0)
                    {
                        printf("NO valido,por favor ingrese un numero desde 0 hasta 999\n");
                        printf("\n");

                        fflush(stdin);
                        valido = 0;
                    }
                    else
                    {
                        valido = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
                    }
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

    // Guardando los artículos tipo 1 en un vector
    for (int i = 0; i < cantidad; i++)
    {
        art1[i] = articulos[i][0];
    }

    printf("\n====================================================================================================\n");

    printf("--- VALORES INGRESADOS ====> \n");
    fprintf(archivo, "\n====================================================================================================\n");

    fprintf(archivo, "--- VALORES INGRESADOS ====> \n");

    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Productos tipo  # %d vendidos para el vendedor %s : %d \n", j + 1, vendedores[i], articulos[i][j]);

            fprintf(archivo, "Productos tipo  # %d vendidos para el vendedor %s : %d \n", j + 1, vendedores[i], articulos[i][j]);
        }
        printf("\n----------------------------------\n");
        fprintf(archivo, "\n----------------------------------\n");
    }
    printf("\n====================================================================================================\n");
    printf("\n====SUMATORIA DE ARTICULOS VENDIDOS PARA CADA VENDEDOR =====\n");
    fprintf(archivo, "\n====================================================================================================\n");
    fprintf(archivo, "\n====SUMATORIA DE ARTICULOS VENDIDOS PARA CADA VENDEDOR =====\n");
    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ventas[i] += articulos[i][j];
        }
    }

    for (int i = 0; i < cantidad; i++)
    {

        printf("Total de productos vendidos por el vendedor  %s : %d \n", vendedores[i], ventas[i]);
        printf("\n----------------------------------\n");
        ventaToda += ventas[i];
        fprintf(archivo, "Total de productos vendidos por el vendedor  %s : %d \n", vendedores[i], ventas[i]);
        fprintf(archivo, "\n----------------------------------\n");
    }
    fprintf(archivo, "\n++++++++++++++++++++++\n\n");
    fprintf(archivo, "Venta total de TODOS los vendedores: %d \n", ventaToda);
    fprintf(archivo, "\n++++++++++++++++++++++\n");
    printf("\n----------------------------------\n");
    printf("Venta total de TODOS los vendedores: %d \n", ventaToda);
    printf("\n----------------------------------\n");

    /*
      printf("\n================== IMPRESION DE PRODUCTOS TIPO 1 DE TODOS LOS VENDEDORES ==========================================\n");
      // Imprimiendo los artículos guardados en el arreglo
      for (int i = 0; i < cantidad; i++)
      {
          printf(" %d\n", art1[i]);
      }
  */
    for (int i = 0; i < cantidad; i++)
    {

        if (ventas[i] < ventas[menor])
        {

            menor = i;
        }
    }
    if (cantidad > 1)
    {
        printf("\n=EL DE MENOR MONTO DE  VENTAS ES EL VENDEDOR DE NOMBRE %s ==", vendedores[menor]);
        fprintf(archivo, "\n=EL DE MENOR MONTO DE  VENTAS ES EL VENDEDOR DE NOMBRE %s ==", vendedores[menor]);
    }

    fclose(archivo);
    getche();
}

// FUNCION QUE VALIDA ENTEROS
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
        fflush(stdin);
        Sleep(1000);
        system("cls");
        system("pause");

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

        if (!isdigit(cadena[i]) || (cadena[0] == '0' && menos == 0) || longitud > 9 || cadena[0] == ' ' || cadena[longitud - 1] == ' ' || longitud == 0 || menos > 1 || cadena[0] == '\0')
        {
            fflush(stdin);
            Sleep(1000);
            system("cls");
            system("pause");

            return arbitro = 0;
        }
    }

    return arbitro = 1;
}
// FUNCION QUE VALIDA CADENA DE CARACTERES!!
int esCadena(char *cadena)
{
    char *letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZÃ¡Ã©Ã­Ã³ÃºÃ¼Ã±ÃÃ‰ÃÃ“ÃšÃœÃ‘";
    int longitud = strlen(cadena);

    // Comprueba si la cadena estÃ¡ vacÃ­a o comienza o termina con un espacio en blanco
    if (longitud == 0 || cadena[0] == ' ' || cadena[longitud - 1] == ' ' || longitud > 10)
    {

        fflush(stdin);
        Sleep(1200);
        system("cls");
        system("pause");
        return 0;
    }

    for (int i = 0; i < longitud; i++)
    {
        // Comprueba si hay mÃ¡s de un espacio en blanco consecutivo
        if (cadena[i] == ' ' && cadena[i + 1] == ' ')
        {
            fflush(stdin);
            Sleep(1200);
            system("cls");
            system("pause");

            return 0;
        }

        // Comprueba si el carÃ¡cter es la letra Ã± o Ã‘
        if (cadena[i] == '\361' || cadena[i] == '\321') // Ã± y Ã‘ en hexadecimal
        {
            continue;
        }

        if (!strchr(letras, cadena[i]) && cadena[i] != ' ') // strchr() busca el carÃ¡cter actual en la cadena letras_validas
        {
            printf("NO VALIDO\n");
            fflush(stdin);
            Sleep(1200);
            system("cls");
            system("pause");

            return 0;
        }
    }

    printf("La cadena es valida.\n");
    return 1; // Retorna 1 solo si todos los caracteres son letras o espacios (pero no al inicio o al final, ni consecutivos)
}
// VALIDA CARACTER (SOLO UNO)
int esCaracterValido(char caracter)
{
    char *letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZáéíóúüñÁÉÍÓÚÜÑ";

    // Comprueba si el carácter es un espacio en blanco o una nueva línea
    if (caracter == ' ' || caracter == '\n')
    {
        printf("NO VALIDO\n");
        Sleep(1000);
        system("cls");

        system("pause");

        return 0;
    }

    if (!strchr(letras, caracter)) // strchr() busca el carácter actual en la cadena letras
    {
        printf("NO VALIDO\n");
        Sleep(1000);
        system("cls");
        system("pause");

        return 0;
    }

    printf("El caracter es valido.\n");
    return 1; // Retorna 1 solo si el caracter es una letra
}

/*
    while (repit != 'N')
    {
        do
        {


            printf("QUIERE RESERVAR INGR? \n De lo contrario,pulse N para no reservar mas asientos y cualquier letra para reservar mas puestos: ");

            scanf("%c", &repit); // El espacio antes de %c ignora cualquier espacio en blanco antes del carácter

            valido1 = esCaracterValido(repit);
        } while (!valido1); // Repite mientras el carácter no sea válido

        repit = toupper(repit); // convert to uppercase
    }
*/