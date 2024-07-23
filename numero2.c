/*Ingrese por teclado los siguientes datos de un alumno: Nombre, Nota uno, Nota dos y Nota
tres. Se pide calcular, el promedio de las calificaciones del estudiante e imprimirlo con su nombre.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[50];
    float nota1=0 ;
    float nota2=0;
    float nota3=0 ;
    float prom=0 ;

    printf("Hola,ingresa tu nombre: ");
    fgets(nombre, 50, stdin); // pones la coma para limitar la cantidad de caracteres
    //getchar();
    printf("Mete tu primera nota: \n");
    scanf(" %f", &nota1);
    printf("Mete tu segunda nota: \n");
    scanf(" %f", &nota2);
    printf("Mete tu tercera nota: \n");
    scanf(" %f", &nota3);
    prom = (nota1 + nota2 + nota3) / 3;
    printf("Estimado,su promedio es de : %.2f  puntos \n",prom);
    return 0;
}
