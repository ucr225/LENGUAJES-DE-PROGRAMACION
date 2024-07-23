/*
3.- Ingrese por teclado los datos de una llamada telefónica, nombre, número de teléfono, y
cantidad de minutos de la llamada (valor entero). Se pide calcular el monto de la llamada
telefónica teniendo presente lo siguiente:
a.- Si la duración de la llamada telefónica es hasta tres (3) minutos inclusive, se cobrara una tarifa
básica de 400 Bs.
b.- Si la llamada se excede más de tres (3) minutos se cobrara la tarifa básica y por cada minuto
adicional al básico 600 Bs.
c.- Imprimir el monto de la llamada telefónica con el nombre del usuario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[50];
    int telefono = 0;
    int minutos = 0;
    int diff = 0;
    int total=0;

    printf("Hola,ingresa tu nombre: ");
    fgets(nombre, 50, stdin); // pones la coma para limitar la cantidad de caracteres
    
    printf("Meta el numero de telefono: \n");
    scanf(" %d", &telefono);

    printf("Ingrese los minutos de duracion de la llamada: \n");
    scanf("%d", &minutos);

    if (minutos <= 3)
    {
        printf (" Estimad@ %s \n",nombre);
        printf("Por ser menos de 3 minutos se le cobra la tarifa basica de 8 BS\n");
    }
    else
    {
        diff = minutos - 3;
        total= (diff*10) +8;
        printf (" Estimad@ %s \n",nombre);
        printf ("Su monto final de cobro es de: %d",total);
    }
}