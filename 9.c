/*9.Dadosciertoscentímetroscomoentradadetipodecimal,escribirsu
equivalenteapies(enteros)ypulgadas(decimal),dandolaspulgadasconuna
precisiónde1lugardecimal.Considerar2.54cmporpulgaday12pulgadaspor
pie.Lasalidapodráser:333.3cmson10piesy11.2pulgadas*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    float pies;
    float pulgadas,centimetros;
    

    printf("Ingrese el valor en centimetros: \n");
    scanf("%f",&centimetros);
    printf("\n");
    pulgadas=centimetros/2.54;
    pies= (int)(pulgadas/12);//asi calculas la parte entera
    pulgadas = fmod(pulgadas,12); //asi la parte decimal
    printf("\n");
    printf(" La cantidad de %.1f centimetros en pulgadas es de %.1f y en pies de %.1f\n",centimetros,pulgadas,pies);

    getchar();
}
