/*8.- Escribe un programa que lea del teclado un código ASCII (entero comprendido entre 0 y 255)
y presente en pantalla el carácter correspondiente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num =0;
    printf("Ingresa un numero entre 0-255\n");
    scanf("%d",&num);
    while (num <0||num > 255)
    {
        printf("Por favor ingresa un numero entre 0-255\n");
        scanf("%d",&num);
    }
    printf("\n");
    printf("Su numero ingresado es el: %d\n",num);
    printf("Su numero en codigo ASCII es: %c\n",(char)num); //con (char)num conviertes un numero en char
 
    return 0;
}
