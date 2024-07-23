#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    int empleados ;
    float suma = 0.0;
    float sueldo[100];
    float prueba[100];

    printf("Ingresa numero de empleados: \n");
    scanf("%d", &empleados);

    for (int i = 0; i < empleados; i++)
    {
        printf("Ingresa sueldo: \n");
        scanf("%f", &sueldo[i]);
    }

    for (int i = 0; i < empleados; i++)
    {
        suma += sueldo[i];
        prueba[i] = suma;
    }
    for (int i = 0; i < empleados; i++)
    {
        printf("%f ", prueba[i]);
    }
    return 0;
}
