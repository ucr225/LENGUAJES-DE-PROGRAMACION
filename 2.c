/*
2.Escribir el programa en C necesario para calcular y mostrar el cuadrado de
un número.El número debe ser mayor que cero,en caso de error que aparezca
el mensaje "ERROR,el número debe ser mayor que cero"

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num = 0;
    int cuadrado = 0;

    printf("Ingrese un numero mayor que cero: \n");
    scanf("%d", &num);
    while (num < 1)
    {
        printf("ERROR!! EL NUMERO DEBE SER MAYOR QUE CERO !! \n");
        printf("Ingrese un numero mayor que cero");
        scanf("%d", &num);
    }
    cuadrado = pow(num, 2);

    printf("Resultado: %d\n", cuadrado);
    getch();
}
