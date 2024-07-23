/*
1) Realiza un programa con una funcion que reciba dos parametros enteros y los sume
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
int suma (int a, int b);//prototipo
void saludo (char nombre[]);//prototipo


int main()
{
	char nombre[25];
    int num1, num2;
    printf("Epa flaco como te llamas tu? \n");
    
    scanf("%s",nombre);
    saludo(nombre);
    printf("Ingrese un numero: \n");
    scanf("%d", &num1);
    printf("Ingrese otro numero: \n");
    scanf("%d", &num2);

    printf("La suma es: %d",suma(num1,num2));

    getche();
}

int suma(int a, int b)
{

    //int result;
    //result = a + b;
    //printf("El resultado es: %d\n", result);
    return (a+b);
}

void  saludo(char nombre[]){

    printf("Hola estimado: %s\n",nombre);
    
}











