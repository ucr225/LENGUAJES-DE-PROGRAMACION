/*
10.- Escribe un programa que lea del teclado dos números en coma flotante cuya parte entera se
asume que no supera 3 dígitos, y muestre en pantalla su suma ajustada a la derecha. Por
ejemplo, si los números son 23.6 y 187.54 el programa debe mostrar:
            23,60
            187,54
        ----------
            211,14
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;

    printf("Por favor ingrese un numero con dos decimales,de tener mas la cantidad se va a redondear hacia arriba \n");
    scanf("%f", &num1);
    printf("Por favor ingrese otro numero con dos decimales,de tener mas la cantidad se va a redondear hacia arriba \n");
    scanf("%f", &num2);

    /*    num1 = ceil(num1* 100) / 100;//asi se redondea al entero mas cercano hacia arriba
     num2 = ceil(num2* 100) / 100;*/

    num3 = num1 + num2;
    printf("    %.2f \n", num1);
    printf("  + %.2f \n", num2);
    printf("----------- \n");//%2.f es para redondear a entero
    printf("    %2.f \n", num3);//%.2f es para redondear a dos decimales
    return 0;
}
