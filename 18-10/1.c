/*

Elabora un programa que a partir de dos numeros te de la suma,resta y multiplicacion de esos numeros

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{

    float num1, num2, result;
    char repit;
    int op = 0;

    while (repit != 'N')
    {
        printf("Ingrese un numero: \n");
        scanf("%f", &num1);

        printf("Ingrese un segundo numero: \n");
        scanf("%f", &num2);

        printf("Ingrese una opcion,1 para sumar,2 para restar y 3 para multiplicar: \n");
        scanf("%d", &op);
        switch (op != 4)
        {
        case 1:

            result = num1 + num2;
            printf("El resultado es: \n");
            printf("%f", result);
            printf("\n");
            break;
        case 2:

            result = num1 - num2;
            printf("El resultado es: \n");
            printf("%f", result);
            printf("\n");
            break;
        case 3:

            result = num1 * num2;
            printf("El resultado es: \n");
            printf("%f", result);
            printf("\n");
            break;

        default:
            printf("OPCION INVALIDA!");
            break;
        }
        printf("\n");
        printf("Quiere repetir el programa? De lo contrario,pulse N para salir y cualquier letra para repetir el programa': ");
        getchar();              // consume the newline character
        repit = getchar();      // read the faculty character
        repit = toupper(repit); // convert to uppercase
        

        getche();
    }
}