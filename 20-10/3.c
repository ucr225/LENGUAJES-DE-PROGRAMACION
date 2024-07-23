/*
genere un vector de size 10 con numeros reales leidos desde el teclado,calcule el promedio  e indique
cuantos elementos del vector son mayores que el promedio y cuantos menores o iguales
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    float numeros[9], suma, promedio;
    int mayores=0, menores=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el valor numero %d ", i + 1);
        scanf("%f", &numeros[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Valores ingresados %.2f ", numeros[i]);
        printf("\n");
    }
    for (int i = 0; i < 10; i++)
    {
        suma += numeros[i];
    }
    promedio = suma / 10;
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] <= promedio)
        {
            menores++;
        }
        else if (numeros[i] > promedio)
        {
            mayores++;
        }
    }

    printf("\n");
    printf("El promedio es: %.2f \n", promedio);
    printf("Hay %d menores", menores);
    printf("\n");
    printf("Hay %d mayores", mayores);

    getche();
}