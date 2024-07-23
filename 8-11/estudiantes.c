/*

1. Realizar un programa en leguaje C, que gestiona 4 notas de una clase de 5
alumnos de los cuales deben ingresar por teclado el nombre y la nota. El
programa debe ser capaz de:
1. Cargar simultáneamente los nombres de los alumnos en un vector y la
cantidad de notas por alumno en una matriz.
2. Buscar un alumno.
Modificar su nota.
4. Realizar la media de todas las notas.
5. Realizar la media de las notas menores de 5.
6. Mostrar el alumno que mejores notas ha sacado.
7. Mostrar el alumno que peores notas ha sacado.
8. Sacar el promedio de notas de todos los alumnos y almacenarlo en un
vector.


*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#define MAX 100
#define FILAS 5
#define COLUMNAS 4
// VALIDACIONES!!

int esCadena(char *cadena);
int esFlotante(char *cadena);
void llenarCeros(float matriz[5][4]);
int esEntero(char *cadena);

int main()
{
    char estudiante[MAX][MAX];
    int valido, opcion, longitud, valido2, student, valido4;
    float notas[5][4], num;
    char notas1[5][4], cadena[100], cadena3[100];
    printf("BIENVENIDO ESTIMADO USUARIO\n");
    printf("A CONTINUACION VA A PROCEDER A REGISTRAR EL NOMBRE DE LOS ESTUDIANTES\n");

    // AQUI ESTOY PIDIENDO LOS NOMBRES DE LOS ESTUDIANTES Y VALIDANDO
    for (int i = 0; i < 5; i++)
    {
        printf("Ingresa el nombre %d : ", i + 1);
        gets(estudiante[i]);
        printf("\n");
        while (!esCadena(estudiante[i]))
        {
            printf("Ingrese un nombre valido: \n");
            printf("\n");
            gets(estudiante[i]);
            estudiante[i][strcspn(estudiante[i], "\n")] = 0;
        }
        printf("\n");
    }
    // IMPRIMIENDO NOMBRES DE LOS ESTUDIANTES
    system("cls");
    printf("\n");
    printf("=====NOMBRES CARGADOS=====\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" NOMBRE DEL ESTUDIANTE NUMERO %d ES: %s \n", i + 1, estudiante[i]);
    }

    printf("A CONTINUACION VA A PROCEDER A REGISTRAR LAS NOTAS DE LOS ESTUDIANTES\n");
    // system("cls");
    printf("=====CARGA DE NOTAS =====\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            valido = 0;
            while (valido != 1)
            {
                printf("Ingresa la nota numero %d para el estudiante NUMERO #%d: ", j + 1, i + 1);
                fgets(notas1[i], sizeof(notas1[i]), stdin);

                // Elimina el salto de línea al final de la cadena, si existe
                notas1[i][strcspn(notas1[i], "\n")] = 0;

                if (esFlotante(notas1[i]))
                {
                    num = strtof(notas1[i], NULL);
                    notas[i][j] = num;
                    valido = 1;
                }
                else
                {
                    printf("INGRESE UNA NOTA VALIDA, DEBE SER ENTRE 1 Y 20\n");
                    valido = 0;
                }
            }
        }
        printf("\n----------------------------------\n");
    }

    system("cls");
    printf("=====NOTAS CARGADAS SATISFACTORIAMENTE =====\n");
    // imprimiendo la matriz de las notas cargadas

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Notas del estudiante numero  %d cuyo nombre es %s : %.2f  \n", i + 1, estudiante[i], notas[i][j]);
            // printf("%.2f", notas[i][j]);
        }
        printf("\n----------------------------------\n");
    }
    printf("\n====================================================================================================\n");
    // system("cls");
    printf("A CONTINUACION SE LE PRESENTARA UN MENU PARA MANIPULAR LOS DATOS DE LOS ESTUDIANTES: \n");
    printf("PULSE EL NUMERO ----> 1) PARA BUSCAR UN ESTUDIANTE Y VER SU RECORD ACADEMICO\n");
    printf("PULSE EL NUMERO ----> 2) PARA BUSCAR UN ESTUDIANTE Y MODIFICAR ALGUNA NOTA\n");
    printf("PULSE EL NUMERO ----> 3) PARA VER AL ALUMNO CON MEJOR PROMEDIO \n");
    printf("PULSE EL NUMERO ----> 4) PARA VER AL ALUMNO CON PEOR PROMEDIO \n");
    printf("PULSE EL NUMERO ----> 5) PARA VER SALIR Y VER TODO \n");
    while (valido2 != 1)
    {
        printf("INGRESE UNA OPCION ");
        gets(cadena);
        // cadena[strcspn(cadena, "\n")] = 0; // Elimina el salto de línea al final de la cadena, si existe

        if (esEntero(cadena))
        {

            opcion = atoi(cadena);
            if (opcion < 1 || opcion > 5)
            {
                printf("OPCION INVALIDA,INGRESE UNA CORRECTA\n");
                fflush(stdin);
                valido2 = 0;
            }
            else
            {
                switch (opcion)

                {
                case 1:
                    system("cls");
                    printf("USTED ESCOGIO BUSCAR UN ESTUDIANTE Y VER SU RECORD ACADEMICO\n");
                    printf("ESTOS SON LOS ESTUDIANTES,ELIGA EL NUMERO CORRESPONDIENTE Y PODRA VER LAS NOTAS\n");
                    for (int i = 0; i < 5; i++)
                    {
                        printf(" == ESTUDIANTE NUMERO %d ES: %s \n", i + 1, estudiante[i]);
                    }
                    while (valido4 != 1)
                    {
                        printf("INGRESE EL NUMERO DEL ESTUDIANTE 1-5\n");
                        gets(cadena3);
                        longitud = strlen(cadena3);
                        if (esEntero(cadena3)) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
                        {

                            student = atoi(cadena3); // enteros MUCHO mas grandes
                            if (student < 1 || student > 5)
                            {
                                printf("OPCION INVALIDA,INGRESE UNA CORRECTA\n");
                                fflush(stdin);
                                valido4 = 0;
                            }

                            valido4 = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
                        }
                        else
                        {
                            printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
                            fflush(stdin);
                            valido4 = 0; // como es invalido se vuelve a pedir hasta que sea valido
                        }
                    }
                    //system("cls");
                    printf("EL ESTUDIANTE NUMERO %d TIENE DE NOMBRE %s \n", student, estudiante[student]);
                    printf("SUS NOTAS SON: \n");
                    for (int i = 0; i < student; i++)
                    {
                        printf("|  %.2f| ", notas[i]);
                        printf("\n----------------------------------\n");
                    }
                    break;
                case 2:
                    printf("USTED ESCOGIO BUSCAR UN ESTUDIANTE Y MODIFICAR ALGUNA NOTA\n");
                    break;
                case 3:
                    printf("USTED ESCOGIO VER AL ALUMNO CON MEJOR PROMEDIO\n");
                    break;
                case 4:
                    printf("USTED ESCOGIO VER AL ALUMNO CON PEOR PROMEDIO\n");
                    break;
                case 5:
                    printf("USTED ESCOGIO VER TODO\n");
                    break;
                default:
                    printf("OPCION INVALIDA\n");
                    break;
                }
                valido2 = 1;
            }
        }
        else
        {
            printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
            valido2 = 0;
        }
    }

    getche();
}

// FUNCION QUE VALIDA CADENA DE CARACTERES!!
int esCadena(char *cadena)
{
    char *letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZáéíóúüñÁÉÍÓÚÜÑ";
    int longitud = strlen(cadena);

    // Comprueba si la cadena está vacía o comienza o termina con un espacio en blanco
    if (longitud == 0 || cadena[0] == ' ' || cadena[longitud - 1] == ' ' || longitud > 10)
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

    printf("CARACTERES REGISTRADOS SATISFACTORIAMENTE! \n");
    return 1; // Retorna 1 solo si todos los caracteres son letras o espacios (pero no al inicio o al final, ni consecutivos)
}

// validacion de flotantes

int esFlotante(char *cadena)
{
    // Declara las variables que se utilizarán en la función
    float valor;
    char temp;

    // Comprueba si la cadena comienza o termina con un espacio en blanco o un punto
    if (cadena[0] == ' ' || cadena[strlen(cadena) - 1] == ' ' || cadena[strlen(cadena) - 1] == '.')
    {
        fflush(stdin);
        return 0;
    }

    // Intenta leer un número flotante y un carácter de la cadena
    int elementosLeidos = sscanf(cadena, "%f%c", &valor, &temp);

    if ((elementosLeidos == 1 || (elementosLeidos > 1 && temp == '\n')) &&
        valor >= 0 && valor <= 20.0)
    {
        float valorRedondeado = roundf(valor * 100) / 100; // Redondea el valor a 2 decimales
        if (valor == valorRedondeado)
        {
            return 1;
        }
    }

    else
    {
        fflush(stdin);

        return 0;
    }
}

/*
int esFlotante(char *cadena)
{
    char *ptr;
    strtof(cadena, &ptr);
    if (*ptr != '\n' && *ptr != '\0')
    {
        return 0;
    }
    return 1;
}
*/
/*
int esFlotante(char *cadena)
{
    char *ptr;
    float valor = strtof(cadena, &ptr);

    // Comprueba si la cadena está vacía, comienza o termina con un espacio en blanco, o termina con un punto
    if (strlen(cadena) == 0 || cadena[0] == ' ' || cadena[strlen(cadena) - 1] == ' ' || cadena[strlen(cadena) - 1] == '.')
    {
        return 0;
    }

    // Comprueba si la cadena se convirtió completamente a un número flotante
    if (*ptr != '\n' && *ptr != '\0')
    {
        return 0;
    }

    // Comprueba si el valor está en el rango permitido
    if (valor < 0 || valor > 20)
    {
        return 0;
    }

    // Redondea el valor a 2 decimales
    float valorRedondeado = roundf(valor * 100) / 100;

    // Comprueba si el valor tiene hasta 2 decimales
    if (valor != valorRedondeado)
    {
        return 0;
    }

    return 1;
}
*/
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
void llenarCeros(float matriz[5][4])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = 0.0f;
        }
    }
}
