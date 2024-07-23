#include <stdio.h>
#include <ctype.h> //obligatorio
#include <string.h>
#include <signal.h>

int busquedaBinaria(int A[], int dato, int inicio, int fin);
int esEntero(char *cadena);

int main()
{
    signal(SIGINT, SIG_IGN);
    char cadena[100], cadena2[100];
    int A[10], aux = 0, dato = 0, valido, longitud, repetido, valido2, longitud2;
    for (int i = 0; i < 10; i++)
    {
        do
        {
            repetido = 0;
            valido = 0;
            while (valido != 1)
            {
                printf("Ingrese el numero %d para su arreglo \n", i + 1);
                gets(cadena);
                longitud = strlen(cadena);
                if (esEntero(cadena)) // llamas la funcion,siempre a la variable debes pasarle el &  CUANDO NO SON ARREGLOS
                {
                    aux = atoll(cadena); // enteros MUCHO mas grandes
                    valido = 1;          // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
                }
                else
                {
                    printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
                    fflush(stdin);
                }
            }

            for (int j = 0; j < i; j++)
            {
                if (A[j] == aux)
                {
                    repetido = 1;
                    printf("El numero ya fue ingresado, por favor ingrese otro numero.\n");
                    break;
                }
            }
        } while (repetido);
        A[i] = aux;
    }
    system("cls");
    // ALGORITMO METODO BURBUJA
    for (int i = 0; i < 9; i++) // el 9 se debe al numero de elementos menos 1
    {
        for (int j = 0; j < 9 - i; j++) // se resta i para no comparar elementos ya ordenados
        {
            if (A[j] > A[j + 1])
            {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
    }
    printf("\n");
    printf("Numeros ingresados en su arreglo: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("        |%d| \n", A[i]);
    }

    while (valido2 != 1)
    {
        printf("Diga que numero desea buscar: ");
        gets(cadena2);
        longitud2 = strlen(cadena2);
        if (esEntero(&cadena2))
        {

            dato = atoi(cadena2);

            valido2 = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
        }
        else
        {
            printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
            fflush(stdin);
            valido2 = 0; // como es invalido se vuelve a pedir hasta que sea valido
        }
    }

    printf("\n");

    int tam = sizeof(A) / sizeof(A[0]);
    int pos = busquedaBinaria(A, dato, 0, tam - 1); // Aquí se cambió 15 por dato

    if (pos == -1)
    {
        printf("El dato no esta en el arreglo\n");
    }
    else
    {
        printf("El dato se encuentra en la posicion %d\n", pos);
    }

    getche();
}

int busquedaBinaria(int A[], int dato, int inicio, int fin)
{
    int mitad = (inicio + fin) / 2;

    // Caso base
    if (A[mitad] == dato)
    {
        return mitad + 1;
    }
    if (inicio > fin)
    {
        return -1;
    }

    // Caso general
    if (dato < A[mitad])
    {
        return busquedaBinaria(A, dato, inicio, mitad - 1);
    }
    else
    {
        return busquedaBinaria(A, dato, mitad + 1, fin);
    }
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
            return arbitro = 0;
        }
    }

    return arbitro = 1;
}
