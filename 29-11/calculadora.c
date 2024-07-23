/*


HAGA UN PROGRAMA QUE  HAGA LAS OPERACIONES BASICAS POR MEDIO DE LLAMADA A FUNCIONES QUE FORMA PARTE DE UNA MATRIZ USANDO PUNTEROS


*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <signal.h>
#include <windows.h>
#include <math.h>
// VARIABLES GLOBALES PARA NO TENER QUE ESTAR REPITIENDOLAS





float valor1 = 1, valor2 = 1, resultado = 0;
char cadena1[100], cadena2[100];
int num = 1;

// VALIDACIONES-PROTOTIPOS...
int esEnteroMenu(char *cadena);
int NumerosValidados();
int esFlotante(char *cadena);
int NumerosValidadosSinCero2();
int esFlotanteParaCero(char *cadena);
float Suma(float *valor1, float *valor2);
float Resta(float *valor1, float *valor2);
float Multiplicacion(float *valor1, float *valor2);
float Division(float *valor1, float *valor2);
int esEntero(char *cadena);

int main()
{
    // Se ignora la seÃ±al ,se escribe eso
    signal(SIGINT, SIG_IGN);
    int opciones, longitud1, valido = 0, longitud, valido5;
    char cadena5[100];
    char cadena[100];
    float (*operaciones[2][2])();

    operaciones[0][0] = Suma;           // Obtén la dirección de la función Suma
    operaciones[0][1] = Resta;          // Obtén la dirección de la función Resta
    operaciones[1][0] = Multiplicacion; // Obtén la dirección de la función Multiplicacion
    operaciones[1][1] = Division;       // Obtén la dirección de la función Division

    ///////////////////

    do
    {
        valido = 0;
        valido5 = 0;

        ///////////////////
        while (valido != 1)
        {
            // num=0;

            printf("               					BIENVENIDO ESTIMADO USUARIO \n");
            printf("               			    =======ESTE ES SU MENU DE OPCIONES======= \n");
            printf("    				 SELECCIONE UNA OPCION PARA HACER UNA OPERACION BASICA \n");
            printf("                					1) SUMAR \n");
            printf("                					2) RESTAR \n");
            printf("                					3) MULTIPLICAR \n");
            printf("                					4) DIVIDIR \n");
            // printf("                					5) SALIR \n");

            gets(cadena);

            longitud1 = strlen(cadena);
            if (esEnteroMenu(cadena))
            {
                opciones = atoi(cadena);
                if (opciones <= 4 && opciones >= 1)
                {
                    valido = 1;
                }

                else
                {
                    printf("INGRESE UNA OPCION VALIDA,LEA NUEVAMENTE EL MENU DE OPCIONES\n");
                    fflush(stdin);
                    Sleep(500);
                    system("cls");
                    valido = 0;
                }
            }
            else
            {
                printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
                fflush(stdin);
                Sleep(500);
                system("cls");
                valido = 0;
            }
        }
        switch (opciones)
        {
        case 1:
            system("cls");
            printf("=======USTED ELIGIO LA FUNCION SUMAR ======= \n");
            NumerosValidados(cadena1, cadena2);

            //printf("%f %f \n\n", valor1, valor2);

            operaciones[0][0](&valor1, &valor2);
            // printf("El resultado de la suma es: %f\n", resultado);
            break;

        case 2:
            system("cls");
            printf("               			    =======USTED ELIGIO LA FUNCION RESTAR ======= \n");
            NumerosValidados(cadena1, cadena2);
            (operaciones[0][1])(&valor1, &valor2);

            break;
        case 3:
            system("cls");
            printf("               			    =======USTED ELIGIO LA FUNCION MULTIPLICAR ======= \n");
            NumerosValidados(cadena1, cadena2);

            (operaciones[1][0])(&valor1, &valor2); // INVOCAS LA SUMA
            // num = 1;
            break;
        case 4:
            system("cls");
            printf("               			    =======USTED ELIGIO LA FUNCION DIVIDIR ======= \n");
            NumerosValidadosSinCero2(cadena1, cadena2);
            (operaciones[1][1])(&valor1, &valor2);
            // num = 1;
            break;
        case 5:
            system("cls");
            printf("               			    *******GRACIAS POR USAR EL PROGRAMA ******* \n");
            break;
            // num = 1;
        default:
            printf("               			    =======INVALIDO INGRESE UN VALOR CORRECTO======= \n");
            // num = 1;
            break;
        }

        while (valido5 != 1)
        {
            printf("======================================================================================\n");
            printf("**ATENCION: INGRESE EL NUMERO ( * 1 * ) PARA TERMINAR DE EJECUTAR el programa.**\n**          INGRESE (-- CUALQUIER NUMERO --) PARA VOLVER A EJECUTARLO**\n");
            fgets(cadena5, sizeof(cadena5), stdin);
            cadena5[strcspn(cadena5, "\n")] = 0;
            // gets(cadena);
            longitud = strlen(cadena5);
            if (esEntero(&cadena5)) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
            {
                // printf("Los datos ingresados  numeros son enteros.\n");

                num = atoi(cadena5); // enteros MUCHO mas grandes
                if (num == -1)
                {
                    valido5 = 1;
                }
                else
                {
                    valido5 = 0;
                    system("cls");
                }

                valido5 = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
            }
            else
            {
                printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
                fflush(stdin);
                valido5 = 0; // como es invalido se vuelve a pedir hasta que sea valido
            }
        }
    } while (num != 1);
    printf("			---------------------------------------------------------------------------\n\n");
    printf("					GRACIAS POR USAR EL PROGRAMA!! VUELVA PRONTO! \n\n ");
        printf("			---------------------------------------------------------------------------\n\n");

    getche();
}

// FUNCION QUE VALIDA ENTEROS
int esEnteroMenu(char *cadena)
{
    int arbitro, menos = 0;
    int longitud;
    int borrar;
    int soloCeros = 1;
    char *punto = strchr(cadena, '.');
    longitud = strlen(cadena);

    if (cadena[0] == '-')
    {
        menos++;
    }

    if (longitud == 0 || cadena[0] == '\0')
    {
        printf("ESTIMADO USUARIO,NO INGRESO NINGUN VALOR! \n");
        printf("\n");
        fflush(stdin);
        Sleep(500);
        system("cls");

        return arbitro = 0;
    }

    for (int i = menos; i < longitud; i++)
    {
        if (longitud == 1 && cadena[i] == '0')
        {
            return arbitro = 1;
        }

        if (!isdigit(cadena[i]) || (cadena[0] == '0' && menos == 0) || longitud > 9 || cadena[0] == ' ' || cadena[longitud - 1] == ' ' || longitud == 0 || menos > 1)
        {
            fflush(stdin);
            Sleep(500);
            system("cls");
            return arbitro = 0;
        }
    }

    return arbitro = 1;
}
int esFlotante(char *cadena)
{
    // Declara las variables que se utilizarÃ¡n en la funciÃ³n
    float valor;
    char temp;

    // Comprueba si la cadena comienza o termina con un espacio en blanco o un punto
    if (cadena[0] == ' ' || cadena[strlen(cadena) - 1] == ' ' || cadena[strlen(cadena) - 1] == '.'|| cadena[0] == '-'&& cadena[1]=='0')
    {
        fflush(stdin);

        Sleep(500);
        system("cls");
        return 0;
    }

    // Intenta leer un nÃºmero flotante y un carÃ¡cter de la cadena
    int elementosLeidos = sscanf(cadena, "%f%c", &valor, &temp);

    // Redondea el valor a 4 decimales
    float valorRedondeado = roundf(valor * 10000) / 10000;

    // Comprueba si la lectura fue exitosa, si el valor estÃ¡ en el rango permitido y si tiene hasta 4 decimales
    // Si todas estas condiciones se cumplen, devuelve 1 para indicar que la cadena es un nÃºmero flotante vÃ¡lido
    // Si no, devuelve 0
    if ((elementosLeidos == 1 || (elementosLeidos > 1 && temp == '\n')) &&
        valor >= -99999.0 && valor <= 99999.0 &&
        valor == valorRedondeado)
    {
        return 1;
    }
    else
    {
        fflush(stdin);

        Sleep(500);
        system("cls");
        return 0;
    }
}
int esFlotanteParaCero(char *cadena)
{
    // Declara las variables que se utilizarÃ¡n en la funciÃ³n
    float valor;
    char temp;

    // Comprueba si la cadena comienza o termina con un espacio en blanco o un punto
    if (cadena[0] == ' ' || cadena[strlen(cadena) - 1] == ' ' || cadena[strlen(cadena) - 1] == '.' || cadena[0] == '-'&& cadena[1]=='0')
    {
        fflush(stdin);

        Sleep(500);
        system("cls");
        return 0;
    }

    // Intenta leer un nÃºmero flotante y un carÃ¡cter de la cadena
    int elementosLeidos = sscanf(cadena, "%f%c", &valor, &temp);

    // Redondea el valor a 4 decimales
    float valorRedondeado = roundf(valor * 10000) / 10000;

    // Comprueba si la lectura fue exitosa, si el valor estÃ¡ en el rango permitido y si tiene hasta 4 decimales
    // Si todas estas condiciones se cumplen, devuelve 1 para indicar que la cadena es un nÃºmero flotante vÃ¡lido
    // Si no, devuelve 0
    if ((elementosLeidos == 1 || (elementosLeidos > 1 && temp == '\n')) &&
        valor >= -999999999.0 && valor <= 999999999.0 &&
        valor == valorRedondeado)
    {
        return 1;
    }
    else
    {
        fflush(stdin);

        Sleep(500);
        system("cls");
        return 0;
    }
}

int NumerosValidados(char *cadena1, char *cadena2)
{

    int valido = 0, valido2 = 0;
    while (valido != 1)
    {
        // Pide al usuario que introduzca una cadena
        printf("===INGRESE EL PRIMER NUMERO,LOS DECIMALES SON VALIDOS: ");
        fgets(cadena1, sizeof(cadena1), stdin);

        // Comprueba si la cadena es un nÃºmero flotante vÃ¡lido
        if (esFlotante(cadena1))
        {
            // Si la cadena es un nÃºmero flotante vÃ¡lido, imprime un mensaje de Ã©xito
            printf("NUMERO CORRECTO!.\n");

            // Convierte la cadena a un nÃºmero flotante
            valor1 = atof(cadena1);

            // Imprime el nÃºmero flotante
            printf("El numero flotante es: %.2f\n", valor1);

            // Indica que la cadena es un nÃºmero flotante vÃ¡lido para salir del bucle
            valido = 1;
        }
        else
        {
            // Si la cadena no es un nÃºmero flotante vÃ¡lido, imprime un mensaje de error
            printf("NUMERO NO VALIDO,INTENTE NUEVAMENTE!\n");
            fflush(stdin);

            Sleep(500);
            system("cls");
        }
    }

    while (valido2 != 1)
    {
        // Pide al usuario que introduzca una cadena
        printf("===INGRESE EL SEGUNDO NUMERO,LOS DECIMALES SON VALIDOS: ");
        fgets(cadena2, sizeof(cadena2), stdin);

        // Comprueba si la cadena es un nÃºmero flotante vÃ¡lido
        if (esFlotante(cadena2))
        {
            // Si la cadena es un nÃºmero flotante vÃ¡lido, imprime un mensaje de Ã©xito
            printf("NUMERO CORRECTO!.\n");

            // Convierte la cadena a un nÃºmero flotante
            valor2 = atof(cadena2);

            // Imprime el nÃºmero flotante
            printf("El numero flotante es: %.2f\n", valor2);

            // Indica que la cadena es un nÃºmero flotante vÃ¡lido para salir del bucle
            valido2 = 1;
        }
        else
        {
            // Si la cadena no es un nÃºmero flotante vÃ¡lido, imprime un mensaje de error
            printf("NUMERO NO VALIDO,INTENTE NUEVAMENTE!\n");
            fflush(stdin);

            Sleep(500);
            system("cls");
        }
    }
}

int NumerosValidadosSinCero2(char *cadena1[100], char *cadena2[100])
{
    // char cadena1[100], cadena2[100];
    int valido = 0, valido2 = 0;
    while (valido != 1)
    {
        // Pide al usuario que introduzca una cadena
        printf("===INGRESE EL PRIMER NUMERO,LOS DECIMALES SON VALIDOS: ");
        fgets(cadena1, sizeof(cadena1), stdin);

        // Comprueba si la cadena es un nÃºmero flotante vÃ¡lido
        if (esFlotante(cadena1))
        {
            // Si la cadena es un nÃºmero flotante vÃ¡lido, imprime un mensaje de Ã©xito
            printf("NUMERO CORRECTO!.\n");

            // Convierte la cadena a un nÃºmero flotante
            valor1 = atof(cadena1);

            // Imprime el nÃºmero flotante
            printf("El numero flotante es: %.2f\n", valor1);

            // Indica que la cadena es un nÃºmero flotante vÃ¡lido para salir del bucle
            valido = 1;
        }
        else
        {
            // Si la cadena no es un nÃºmero flotante vÃ¡lido, imprime un mensaje de error
            printf("NUMERO NO VALIDO,INTENTE NUEVAMENTE!\n");
            fflush(stdin);

            Sleep(500);
            system("cls");
        }
    }

    while (valido2 != 1)
    {
        printf("===INGRESE EL SEGUNDO NUMERO (COMO ES UNA DIVISION,EL SEGUNDO NUMERO NO PUEDE SER  CERO (0) ),LOS DECIMALES SON VALIDOS: ");
        fgets(cadena2, sizeof(cadena2), stdin);

        if (esFlotanteParaCero(cadena2))
        {
            printf("NUMERO CORRECTO!.\n");
            valor2 = atof(cadena2);
            if (valor2 == 0)
            {
                fflush(stdin);
                Sleep(500);
                system("cls");
                valido2 = 0;
            }
            else
            {
                printf("El numero flotante es: %.2f\n", valor2);
                valido2 = 1; // Move this line here
            }
        }
        else
        {
            printf("NUMERO NO VALIDO,INTENTE NUEVAMENTE!\n");
            fflush(stdin);
            Sleep(500);
            system("cls");
        }
    }
}
float Suma(float *valor1, float *valor2)
{
    float resultado = *valor1 + *valor2;
    printf("RESULTADO DE  %.2f + %.2f = %.2f \n", *valor1, *valor2, resultado);
    // num=0;
    //  return resultado;
}

float Resta(float *valor1, float *valor2)
{
    float resultado = *valor1 - *valor2;
    printf("RESULTADO DE  %.2f - %.2f = %.2f \n", *valor1, *valor2, resultado);
    num = 0;

    // return resultado;
}

float Multiplicacion(float *valor1, float *valor2)
{
    float resultado = *valor1 * *valor2;
    printf("RESULTADO DE  %.2f * %.2f = %.2f \n", *valor1, *valor2, resultado);
    // num=0;
    //  return resultado;
}

float Division(float *valor1, float *valor2)
{
    float resultado = *valor1 / *valor2;
    printf("RESULTADO DE  %.2f / %.2f = %.2f \n", *valor1, *valor2, resultado);
    // num=0;
    //  return resultado;
}

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

        if (!isdigit(cadena[i]) || (cadena[0] == '0' && menos == 0) || longitud > 9 || cadena[0] == ' ' || cadena[longitud - 1] == ' ' || longitud == 0 || menos > 1)
        {
            fflush(stdin);
             Sleep(1000);
            system("cls");
            
            return arbitro = 0;
        }
    }

    return arbitro = 1;
}
