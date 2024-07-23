/*16.- Ingrese por teclado los siguientes datos de un conjunto de alumnos: Nombre, edad, nota uno
con ponderación del 45%, nota dos con ponderación del 30% y nota tres con la ponderación
restante. Se pide:
a) Calcula la Nota final del estudiante e imprimirlo con su nombre.
b) Cuántos alumnos aprobaron y reprobaron.
Utilizar el ciclo while con respuestas del operador.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
main()
{
    char nombre[100][100];
    int edad[100];
    float nota1[100];
    float nota2[100];
    float nota3[100];
    int aprobados=0;
    int reprobados=0;
    float final[100];
    int alumnos=0;

    printf("Por favor ingresa el numero de alumnos: \n");
    scanf("%d", &alumnos);
    int i = 0;
    do
    {
        printf("Ingresa el nombre %d: ", i + 1);
        scanf("%s", nombre[i]);//asi se guarda en el arreglo de nombre bidimensional
        printf("\n");
        printf("Ingresa la nota del alumno  %d con valor de 45/100: ", i + 1);
        scanf("%f", &nota1[i]);
        printf("\n");
        printf("Ingresa la nota del alumno  %d con valor de 30/100: ", i + 1);
        scanf("%f", &nota2[i]);
        printf("\n");
        printf("Ingresa la nota del alumno  %d con valor de 25/100: ", i + 1);
        scanf("%f",& nota3[i]);
        printf("\n");

        final[i] = (((nota1[i]*9)/20) + ((nota2[i]*6)/20) + ((nota3[i]*5)/20)); 
                
            if (final[i]>=9.5)
            {
                aprobados++;

            }else{
                reprobados++;
            }
            
        i++;
    } while (i < alumnos);

    for (int i = 0; i < alumnos; i++)
    {
        printf("El alumno %d de nombre %s tiene una nota final de: %.2f puntos \n", i+1,nombre[i],final[i]); 
    }
    printf("Hay un total de %d aprobados\n",aprobados); 
    printf("Hay un total de %d reprobados\n",reprobados); 

    return 0;
}