/*14.- Ingresar por teclado los siguientes datos de un conjunto de empleados: nombre, edad, sexo,
monto de asignación mensual y monto de deducción mensuales. Se pide:
a) Calcular el sueldo actual del empleado e imprimirlo con su nombre.
b) Edad promedio de los hombres.
c) Porcentaje de mujeres y hombres.
d) Cuantos sueldos netos mensuales son mayores a 450 Bs.F.
Utilizar el haga mientras con una respuesta del operador.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float asignacion[100], deduccion[100], sueldo[100],,suma,prueba[100];
    int empleados = 0, mayores = 0;
    int mujer = 0, hombre = 0, genero, superior;
    char nombre[100][100];
    int edad[100], edadtotal = 0;
    float edadprom;
    char sexos[100];
    int hombres = 0, mujeres = 0;

    printf("Por favor ingrese el numero de empleados a ingresar en el programa: \n");
    scanf("%d", &empleados);

    for (int i = 0; i < empleados; i++)
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
            superior++;
        }
    }
    edadprom = (float)edadtotal / hombre;
    for (int i = 0; i < empleados; i++)
    {
        suma+=sueldo[i]+sueldo[i-1];
        prueba[i] = suma;

    }
    for (int i = 0; i < empleados; i++)
    {
        printf("%f ", prueba[i]);
    }
    
    for (int i = 0; i < empleados; i++)
    {
        printf(" El empleado numero %d tiene como nombre: %s\n", i + 1, nombre[i]);
        printf("Las edad del empleado %d es de: %d \n", i + 1, edad[i]);
        printf("El empleado %s tiene un sueldo  MENSUAL DE %f \n", nombre[i], sueldo[i]);
        printf("El empleado %s tiene un sueldo SEMANAL DE %f \n", nombre[i],sueldo[i]/4);
        printf("El empleado %s tiene un sueldo QUINCENAL DE %f \n", nombre[i],sueldo[i]/2);


        printf("\n");
    }

    printf("Hay %d hombre(s) \n", hombre);
    printf("hay %d mujere(s)\n", mujer);
    printf("Edad promedio de hombres es de: %.2f \n", edadprom);
    printf("hay %d sueldos superiores a 450bs\n", superior);
    return 0;
}
