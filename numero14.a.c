#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float asignacion[100], deduccion[100], sueldo[100];
    int empleados = 0, mayores = 0;
    int mujer = 0, hombre = 0, genero;
    char nombre[100][100];
    int edad[100], edadtotal = 0;
    float edadprom;
    char sexos[100];
    int hombres = 0, mujeres = 0;

    printf("Por favor ingrese el numero de empleados a ingresar en el programa: \n");
    scanf("%d", &empleados);

    int i = 0;
    do
    {
        printf("Ingresa el nombre %d: ", i + 1);
        scanf("%s", nombre[i]);
        printf("\n");
        printf("Ingrese el sexo del empleado %d , ingrese el num 1 para mujer y el num 2 para hombre \n", i + 1);
        scanf("%d", &genero);
        printf("\n");
        while (genero != 1 && genero != 2)
        {
            printf("Ingrese de nuevo el sexo del empleado %d , ingrese el num 1 para mujer y el num 2 para hombre \n", i + 1);
            scanf("%d", &genero);
        }

        printf("Ingrese la edad del empleado %d \n", i + 1);
        scanf("%d", &edad[i]);
        printf("\n");
        printf("Ingrese monto de asignación mensual del empleado %d \n", i + 1);
        scanf("%f", &asignacion[i]);
        printf("\n");
        printf("Ingrese monto de deduccion mensual del empleado %d \n", i + 1);
        scanf("%f", &deduccion[i]);
        printf("\n");
        if (genero == 1)
        {
            mujer++;
        }
        else
        {
            hombre++;
            edadtotal += edad[i];
        }
        sueldo[i] = asignacion[i] - deduccion[i];
        if (sueldo[i] > 450)
        {
            mayores++;
        }

        i++;
    } while (i < empleados);

    edadprom = (float)edadtotal / hombre;

    for (int i = 0; i < empleados; i++)
    {
        printf("El empleado numero %d tiene como nombre: %s\n", i + 1, nombre[i]);
        printf("Las edad del empleado %d es de: %d \n", i + 1, edad[i]);
        printf("El empleado %s tiene un sueldo MENSUAL de %.2f \n", nombre[i], sueldo[i]);
        printf("El empleado %s tiene un sueldo QUINCENAL de %.2f \n", nombre[i], sueldo[i] / 2);
        printf("El empleado %s tiene un sueldo SEMANAL de %.2f \n", nombre[i], (sueldo[i]*12) / 52);
    //es *12 por los meses del ano y divides por 52 porque esa es la cantidad de semanas que tiene un ano
        printf("\n");
    }

    printf("Hay %d hombre(s) \n", hombre);
    printf("hay %d mujere(s)\n", mujer);
    printf("Edad promedio de hombres es de: %.2f \n", edadprom);
    printf("Hay %d sueldo(s) mayores a 450 Bs.F\n", mayores);

    return 0;
}
