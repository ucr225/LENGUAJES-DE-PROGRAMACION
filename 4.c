/**

  4.DiseñarunprogramaenCquecalculelalongituddelacircunferenciayel
áreadelcírculoderadiodado

**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{

    float longitud = 0;
    float area = 0;
    float radio = 0;
    const float pi = 3.14;
    printf("Ingrese longitud del radio en Cm: \n");
    scanf("%f", &radio);
    longitud = pi * (radio);
    area = pi * pow(radio, 2);
    printf("El valor de la longitud es de:%3.f \n", longitud);
    printf("El valor del area es de %3.f cm cuadrados \n", area);

    getch();
}
