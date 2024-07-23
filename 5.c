/**
 5.DiseñarunprogramaenCquecalculelasuperficiedeuntriánguloapartir
delingresodesubaseyalturaymuestreelresultado.
**/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    float superficie=0;
    float base=0;
    float altura=0;

    printf("Ingrese la base del triangulo: \n");
    scanf("%f",&base);
    printf("Ingrese la altura del triangulo: \n");
    scanf("%f",&altura);
    superficie= (base*altura)/2;
    printf("\n");
    printf("La superficie es: %.2f \n",superficie);
    getch();
}