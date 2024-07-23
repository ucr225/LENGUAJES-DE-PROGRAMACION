/*1.- Ingrese por teclado dos números y calcular la suma, resta y multiplicación entre ellos. Imprimir
cada uno de los resultados acompañado de un mensaje orientado al usuario*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int esFlotante(char *cadena) // nombre de la funcion
{
    int arbitro = 1;        // si la condicion se cumple,la variable arbitro sera 1,si no,sera 0
    int contadorPuntos = 0; // contador para los puntos en la cadena
    int longitud;
    longitud = strlen(cadena);
    for (int i = 0; i < longitud; i++) // for que recorre todo el char
    {
        if (cadena[i] == '.') // si el caracter es un punto
        {
            contadorPuntos++;       // incrementa el contador de puntos
            if (contadorPuntos > 1) // si hay mas de un punto en la cadena
            {
                return arbitro = 0; // devuelve cero
            }
        }
        else if (!isdigit(cadena[i])) // si el caracter no es un digito
        {
            return arbitro = 0; // devuelve cero
        }
    }

    if (contadorPuntos == 0) // si no hay ningun punto en la cadena
    {
        strcat(cadena, ".0"); // agrega .0 al final de la cadena
    }

    return arbitro; // si todos los caracteres son digitos o un solo punto, devuelve uno
}

int main()
{

    char num[20], nume2[20];
    float num1 = 0;
    float num2 = 0;
    float sum = 0;
    float rest = 0;
    float mult = 0;
    float div = 0;
    int valido = 0;

    while (valido != 1)
    {
        printf("Ingresa un numero: ");
        scanf("%s", num);
        if (esFlotante(num)) // llamas la funcion
        {
            //printf("La cadena contiene solo números flotantes\n");

            //printf("%s", num);
            valido = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
        }
        else
        {
            printf("La cadena no contiene solo números flotantes .Ingreselo nuevamente: \n");
            valido = 0; // como es invalido se vuelve a pedir hasta que sea valido
        }
    }
    num1 = atof(num);
    printf("\n");
    valido = 0; //

    while (valido != 1)
    {
        printf("Ingresa otro numero : ");
        scanf("%s", nume2);
        if (esFlotante(nume2)) // llamas la funcion
        {
            //printf("La cadena contiene solo números flotantes\n");

            //printf("%s", nume2);
            valido = 1; // como es valido el valor cambia entonces ya no se vuelve a pedir la cadena
        }
        else
        {
            printf("La cadena no contiene solo números flotantes,se le va  a pedir nuevamente un valor!  \n");
            valido = 0; // como es invalido se vuelve a pedir hasta que sea valido
        }
    }
    num2 = atof(nume2);
    sum = num1 + num2;
    rest = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    printf("\n");
    printf("La suma es: %.0f \n", sum); // con el %.2f imprimes con dos decimales,con %.0f sin decimales
    printf("La resta es: %.2f \n", rest);
    printf("La mult es: %.2f \n", mult);
    printf("La div es: %.2f \n", div);

    return 0;
}