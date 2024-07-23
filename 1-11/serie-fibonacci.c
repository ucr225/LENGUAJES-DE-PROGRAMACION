/*
Elabore un programa en C para representar la serie fibonacci aplicando recursividad

*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <signal.h>
#include <math.h>
#include <ctype.h>

void fibonacci(int n, int t1, int t2, int nivel);
int esEntero(char *cadena);

int main()
{

    signal(SIGINT, SIG_IGN);

    int elemento, valido, longitud;
    char cadena[100];
    long long int fibo1 = 1, fibo2 = 1;

    while (valido != 1)
    {
        printf("Ingrese un numero  para representar el elemento de la serie Fibonacci.\n El numero debe estar entre 1 y 90 \n");
        gets(cadena); // USAR SIEMPRE!!

        longitud = strlen(cadena);
        if (esEntero(&cadena)) // llamas la funcion
        {

            int elemento = atoi(cadena);

            fibonacci(elemento, 0, 1, 0);

            valido = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
        }
        else
        {
            printf("NO valido,por favor ingrese su numero entero sin ceros al inicio/un numero mas corto/un numeros sin decimales\n");
            fflush(stdin);
            valido = 0; // como es invalido se vuelve a pedir hasta que sea valido
        }
    }

    printf("\n");

    getche();
}
void fibonacci(int n, int t1, int t2, int nivel)
{
    if (n > 0)
    {
        for (int i = 0; i < nivel; i++)
        {
            printf("  ");
        }
        printf("%d\n", t1);
        fibonacci(n - 1, t2, t1 + t2, nivel + 1);
    }
}

int esEntero(char *cadena) // nombre de la funcion,si la condicion se cumple,la variable arbitro sera 1,si no,sera 0
{
    int arbitro, elemento;
    int longitud;
    int borrar;
    int soloCeros = 1;
    char *punto = strchr(cadena, '.'); //  Para PODER Buscar el punto en la cadena
    longitud = strlen(cadena);
    // Verificar si la cadena está vacía
    if (longitud == 0 || cadena[0] == '\0')
    {
        printf("ESTIMADO USUARIO,NO INGRESO NINGUN VALOR! \n");
        fflush(stdin);
        return arbitro = 0;
    }
    for (int i = 0; i < longitud; i++) // for que recorre todo el char,El bucle continúa hasta que encuentra el carácter nulo '\0', que marca el final de la cadena en C
    {
        if (longitud == 1 && cadena[i] == '0')
        {
            return arbitro = 1;
        }

        if (!isdigit(cadena[i]) || cadena[0] == '0' || longitud > 9 || cadena[0] == ' ' || cadena[longitud - 1] == ' ' || longitud == 0) // Esta línea usa la función 'isdigit' de la biblioteca 'ctype.h' para verificar si el carácter actual no es un dígito
        {
            fflush(stdin);
            return arbitro = 0; // si recorre la cadena y hay por lo menos un caracter,devuelve cero
        }
        if (cadena[longitud - 2] == '.' && cadena[longitud - 1] == '0')
        {
            cadena[longitud - 2] = '\0'; // Borramos los dos últimos caracteres
            // Borramos los dos últimos caracteres
            longitud -= 2; // Actualizamos la longitud de la cadena
        }

        arbitro = 1; // termina de recorrerse el arreglo y si todos son digitos entonces es true
        if (arbitro == 1)
        {
            int elemento = atoi(cadena);
            while (elemento > 90 || elemento < 1)
            {
                fflush(stdin);
                return arbitro = 0;
                sprintf(cadena, "%d", elemento); // asi pasas de enteros a cadenas
                esEntero(cadena);
            }
        }
    }
    return arbitro = 1;
}