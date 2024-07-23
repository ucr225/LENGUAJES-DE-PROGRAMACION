/*
Calcula el factorial de un numero
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>

int main(){

    int result=1,numero;//debes de inicializar la variable en 1 para que no comience multiplicando por 0
    

    printf("Ingresa el numero para calcular el factorial: ");
    scanf("%d",&numero);
    for (int i = 1; i < numero; i++)
    {
        result+=result*i;//se pone resultado por i sumandose ya que asi se ve cuando el reultado va aumentando a medida que i sube
    }
    printf("\n");
    printf("El resultado es: %d\n", result);

    getche();
}

/*

5*4*3*2*1
*/

