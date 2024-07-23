/*
11.RealizarunprogramaenCquepermitaingresarunnúmero
correspondientealosdíasdeunasemanaymuestreelnombredeldía.Quese
permitatrabajarhastaqueelusuarioindiquelocontrario.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main(){

int dia;
printf("Ingrese un numero del 1 al 7 para indicar que dia de la semana es: \n");
scanf("%d",&dia);
while (dia<1 || dia>7)
{
    printf("Ingrese un numero valido: \n");
    scanf("%d",&dia);
}
if (dia==1)
{
    printf("LUNES");
}else if (dia==2){
    printf("MARTES");
}else if (dia==3){
    printf("MIERCOLES");
}else if (dia==4){
    printf("JUEVES");
}else if (dia==5){
    printf("VIERNES");
}else if (dia==6){
    printf("SABADO");
}else if (dia==7){
    printf("DOMINGO");
}

}