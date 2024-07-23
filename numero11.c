/*11.- Escribe un programa que lea 2 números enteros de 3 dígitos e imprima su producto. Por
ejemplo, si los números son 325 y 426 se presentará en el formato
325
x 426
------------
1950
650
1300
------------
138450*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int num1=0, num2=0,rt=0,d=0,e=0,f=0;
    char linea[10] ="------------";
    printf("Ingresa un numero de 3 cifras: \n");
    scanf("%d", &num1);
    while (num1 > 999 || num1 < 100)
    {
        printf("Por favor,ingresa un numero de 3 cifras: \n");
        scanf("%d", &num1);
    }
    printf("Ingresa otro numero de 3 cifras: %d\n");
    scanf("%d", &num2);
    while (num2 > 999 || num2 < 100)
    {
        printf("Por favor,ingresa un numero de 3 cifras: \n");
        scanf("%d", &num2);
    }
    /* 
     a = num1 / 100;//primer digito 
     b = (num1 / 10) % 10;//segundo
     c = num1 % 10;//tercero
    */

     d = num2 / 100;
     e = (num2 / 10) % 10;
     f = num2 % 10;
     rt = num1*num2;
     printf("El resultado es: \n"); 
     printf("  %d \n",num1);
     printf("X %d \n",num2);
    printf("%s \n",linea);
    printf("  %d \n",f*num1);
    printf("  %d  \n",e*num1);
    printf("  %d   \n",d*num1);
    printf("%s \n",linea);
    printf("  %d ",rt);

    
}