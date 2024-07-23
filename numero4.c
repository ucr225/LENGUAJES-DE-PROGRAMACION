/*4.- Escribe un programa que calcule el área de un círculo de radio R y la longitud de su
circunferencia. Solicitar el valor de R por teclado, mostrando en la pantalla los mensajes
necesarios (S = π ⋅ R2 ; L = 2 ⋅ π ⋅ R)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float longitud = 0;
    float area = 0;
    float radio = 0;
    const float pi=3.14;
    printf("Ingrese longitud del radio en Cm: \n");
    scanf("%f", &radio);
    longitud = pi * (radio);
    area = pi * pow(radio, 2);
    printf("El valor de la longitud es de:%3.f \n",longitud);
    printf("El valor del area es de %3.f cm cuadrados \n",area);
    return 0;
}