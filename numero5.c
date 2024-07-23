/*5.-Sean dos cuadrados de lados L1 y L2 inscritos uno en otro. Calcula el área de la zona
comprendida entre ambos, utilizando para ello una función (que se llamará Área Cuadrado) que
devuelve el área de un cuadrado cuyo lado se pasa como argumento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// funcion
float AreaCuadrado(float l1, float l2)
{
    float a1 = 0;
    float a2 = 0;
    float a3 = 0;
    a1 = pow(l1, 2);
    a2 = pow(l2, 2);
    if (a1 > a2)
    {
        a3 = a1 - a2;
    }
    else
    {
        a3 = a2 - a1;
    }
    printf("El area de la zona comprendida entre ambos es de: %f \n", a3);
}

int main(){
    float a1=0;
    float a2=0;

    printf("Por favor ingrese el valor del primer lado del cuadrado:  \n");
    scanf("%f",&a1);

    printf("Por favor ingrese el valor del segundo lado del cuadrado: \n");
    scanf("%f",&a2);
    AreaCuadrado(a1, a2); 
    return 0;
}