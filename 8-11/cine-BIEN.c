#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
// PROTOTIPOS DE FUNCIONES
void imprimir(int x[25][4]);                  // imrprime las sillas
void cambio(int x, int y, int z[25][4]);      // reserva las sillas
void cancelacion(int x, int y, int z[25][4]); // cancela las sillas
int todos(int z[25][4]);                      // verifica si todas las sillas estan disponibles
int esEntero(char *cadena);                   // valida enteros
int esCaracterValido(char caracter);          // valida cadenas
int esCadena(char *cadena);

int main()
{
    fflush(stdin);
    signal(SIGINT, SIG_IGN);
    int cine[25][4] = {0}, cantidad, cantidad2, fila, columna, cancelar;
    char repit[5], repit2[5], cadena1[100], cadena2[100], cadena3[100], cadena4[100];
    int valido, valido2, valido3 = 0, longitud, longitud2, longitud3, valido4, longitud4;

    printf("-------BIENVENIDO AL SISTEMA DE RESERVACION---------- \n");
    printf("A CONTINUACION SE MUESTRA LA DISTRIBUCION DE LOS ASIENTOS DISPONIBLES DEL CINE \n");
    imprimir(cine);

    printf("A CONTINUACION PROCEDA A RESERVAR UN ASIENTO \n");
    fflush(stdin);
    while (repit != 'N' || repit != 'n')
    {
        // printf("HOLAAAAA!\n");
        while (1)
        {

            valido = 0;
            while (valido != 1)
            {
                printf("Seleccione que fila quiere reservar:\n");
                fgets(cadena1, sizeof(cadena1), stdin); // USAR SIEMPRE!!

                fflush(stdin);
                longitud = strlen(cadena1);
                fflush(stdin);
                if (esEntero(cadena1)) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
                {

                    fila = atoi(cadena1); // enteros MUCHO mas grandes
                    fflush(stdin);

                    while (fila < 1 || fila > 25)
                    {
                        fflush(stdin);
                        valido = 0;
                    }
                    valido = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
                }
                else
                {
                    printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
                    fflush(stdin);
                    valido = 0; // como es invalido se vuelve a pedir hasta que sea valido
                }
            }
            // printf("HOLAAAA22A!\n");
            while (valido2 != 1)
            {

                fflush(stdin);
                printf("Seleccione que columna quiere reservar:\n");
                gets(cadena2); // USAR SIEMPRE!!
                 fflush(stdin);
                longitud = strlen(cadena2);
                if (esEntero(cadena2)) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
                {

                    columna = atoi(cadena2); // enteros MUCHO mas grandes
                    while (columna < 1 || columna > 4)
                    {
                        fflush(stdin);
                        valido2 = 0;
                    }
                    valido2 = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
                }
                else
                {
                    printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
                    fflush(stdin);
                    valido2 = 0; // como es invalido se vuelve a pedir hasta que sea valido
                }
            }
            if (cine[fila - 1][columna - 1] == 1)
            {
                printf("Este asiento ya esta reservado. Por favor, seleccione otro.\n");

                fflush(stdin);
            }
            else
            {
                break;
            }
        }
        system("cls");
        cambio(fila, columna, cine);
        imprimir(cine);
        int valido1;
        fflush(stdin);
        printf("QUIERE RESERVAR OTRO ASIENTO? \n De lo contrario,pulse N para no reservar mas asientos y cualquier letra para reservar mas puestos: ");
        fgets(repit, sizeof(repit), stdin);
        scanf("%c", &repit); // El espacio antes de %c ignora cualquier espacio en blanco antes del carácter
        while (!esCadena(repit))
        {
            printf("Ingrese solo UN caracter: ");
            gets(repit);
            fflush(stdin);
            repit[strcspn(repit, "\n")] = 0;

            // repit = toupper(repit); // convert to uppercase
        }
    }

    system("cls");
    // printf("QUIERE CANCELAR ALGUN ASIENTO?\n PULSE 1 PARA CANCELAR ALGUN ASIENTO\nPULSE 2 PARA NO CANCELAR NINGUN ASIENTO,VER EL STATUS ACTUAL DE DIPONIBILIDAD Y SALIR DEL PROGRAMA\n");
    // scanf("%d", &cancelar);
    // while (cancelar > 2 || cancelar < 1)
    //{
    //   printf("ingrese algo valido ");
    // scanf("%d", &cancelar);
    //}
    fflush(stdin);
    system("cls");
    while (valido3 != 1)
    {
        printf("QUIERE CANCELAR ALGUN ASIENTO?\n PULSE 1 PARA CANCELAR ALGUN ASIENTO\nPULSE 2 PARA NO CANCELAR NINGUN ASIENTO,VER EL STATUS ACTUAL DE DIPONIBILIDAD Y SALIR DEL PROGRAMA\n");
        gets(cadena3); // USAR SIEMPRE!!
        fflush(stdin);
        longitud3 = strlen(cadena3);
        if (esEntero(cadena3)) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
        {

            cancelar = atoi(cadena3); // enteros MUCHO mas grandes
            while (cancelar > 2 || cancelar < 1)
            {
                printf("INGRESE UN NUMERO VALIDO: ");
                gets(cadena3); // USAR SIEMPRE!!
                fflush(stdin);
                longitud3 = strlen(cadena3);
                if (esEntero(cadena3)) // llamas la funcion
                {
                    cancelar = atoi(cadena3); // enteros MUCHO mas grandes
                    valido3 = 1;              // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
                }
                else
                {
                    printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
                    fflush(stdin);
                    valido3 = 0; // como es invalido se vuelve a pedir hasta que sea valido
                }
                valido3 = 0;
            }
            valido3 = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
        }
        else
        {
            printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
            fflush(stdin);
            valido3 = 0; // como es invalido se vuelve a pedir hasta que sea valido
        }
    }

    if (cancelar == 1)
    {
        fflush(stdin);
        printf("USTED SELECCIONO LA OPCION DE CANCELAR UN ASIENTO,A CONTINUACION SE LE VA A MOSTRAR LOS ASIENTOS RESERVADOS\n");
        imprimir(cine);
        while (repit2 != 'N' && !todos(cine))
        {
            while (1)
            {
                printf("Seleccione que fila quiere cancelar:\n");
                while (1) // Bucle infinito hasta que se ingrese un número válido
                {
                    if (scanf("%d", &fila) == 1 && fila > 0 && fila <= 25)
                    {
                        break; // Si el número es válido, rompe el bucle
                    }
                    else
                    {
                        printf("Error: Ingrese un numero entero positivo valido para la fila (1-%d).\n", 25);
                        while (getchar() != '\n')
                            ; // Limpiar el búfer de entrada
                    }
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
            int valido21;
            do
            {

                printf("QUIERE CANCELAR OTRO ASIENTO? \n De lo contrario,pulse N para no cancelar mas asientos y cualquier letra para cancelar mas puestos: ");

                scanf("%c", &repit2); // El espacio antes de %c ignora cualquier espacio en blanco antes del carácter

                valido21 = esCaracterValido(repit2);
            } while (!valido21); // Repite mientras el carácter no sea válido

            // read the faculty character
            // repit2 = toupper(repit2); // convert to uppercase
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
int esEntero(char *cadena)
{
    int arbitro, menos = 0;
    int longitud;
    int borrar;
    int soloCeros = 1;
    char *punto = strchr(cadena, '.');
    longitud = strlen(cadena);
    if (cadena[longitud - 1] == '\n') ////COPIAR EEN TODOOO////////////////////////////////
    {
        cadena[longitud - 1] = '\0';
        longitud--; // update the length after removing the newline
    }
    if (longitud == 0 || cadena[0] == '\0')
    {
        printf("ESTIMADO USUARIO,NO INGRESO NINGUN VALOR! \n");
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

        if (!isdigit(cadena[i]) || (cadena[0] == '0' && menos == 0) || longitud > 2 || cadena[0] == ' ' || cadena[longitud - 1] == ' ' || longitud == 0 || menos > 1)
        {
            fflush(stdin);
            return arbitro = 0;
        }
    }

    return arbitro = 1;
}

int esCaracterValido(char caracter)
{
    char *letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZáéíóúüñÁÉÍÓÚÜÑ";

    // Comprueba si el carácter es un espacio en blanco, una nueva línea o un valor nulo
    // Comprueba si la longitud de la cadena es mayor que 1
    if (strlen(caracter) > 1)
    {
        printf("NO VALIDO\n");
        fflush(stdin);
        return 0;
    }
    if (caracter == ' ' || caracter == '\n' || caracter == '\0')
    {
        printf("NO VALIDO\n");
        fflush(stdin);
        return 0;
    }

    if (!strchr(letras, caracter)) // strchr() busca el carácter actual en la cadena letras
    {
        printf("NO VALIDO\n");
        fflush(stdin);
        return 0;
    }

    printf("El caracter es valido.\n");
    return 1; // Retorna 1 solo si el caracter es una letra
}

int esCadena(char *cadena)
{
    char *letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZáéíóúüñÁÉÍÓÚÜÑ";
    int longitud = strlen(cadena);

    // Comprueba si la cadena está vacía o comienza o termina con un espacio en blanco
    if (longitud == 0 || cadena[0] == ' ' || cadena[longitud - 1] == ' ' || longitud > 1)
    {
        fflush(stdin);

        return 0;
    }

    for (int i = 0; i < longitud; i++)
    {
        // Comprueba si hay más de un espacio en blanco consecutivo
        if (cadena[i] == ' ' && cadena[i + 1] == ' ')
        {
            fflush(stdin);

            return 0;
        }

        // Comprueba si el carácter es la letra ñ o Ñ
        if (cadena[i] == '\361' || cadena[i] == '\321') // ñ y Ñ en hexadecimal
        {
            continue;
        }

        if (!strchr(letras, cadena[i]) && cadena[i] != ' ') // strchr() busca el carácter actual en la cadena letras_validas
        {
            printf("NO VALIDO\n");
            fflush(stdin);

            return 0;
        }
    }

    printf("La cadena es valida.\n");
    return 1; // Retorna 1 solo si todos los caracteres son letras o espacios (pero no al inicio o al final, ni consecutivos)
}