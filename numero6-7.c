/*6. Una temperatura en grados centígrados C, puede ser convertida en su valor equivalente de la
escala Fahrenheit de acuerdo a la siguiente fórmula: F = (9 / 5) C + 32
7.- Escribe un programa C que solicite una temperatura en grados centígrados por teclado y
presente en pantalla la temperatura Fahrenheit equivalente. (ATENCIÓN a la división 9/5).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float centigrados = 0;
    float farenheit = 0;
    const float a = 1.8;
    printf("Estimado,ingrese las temperatura en grados centigrados: \n");
    scanf("%f", &centigrados);

    farenheit = (a * centigrados) + 32;

    printf("Estimado,la temperatura en grados farenheit: %2.f \n", farenheit);
    return 0;
}