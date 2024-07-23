/*27.Ingresarporteclado3númeroscorrespondientesalosladosdeun
triángulo.Teniendoencuentaquelasumadelosdosladosmenorestieneque
sersuperioralladomayorparaqueformenuntriángulo,indicarsilosnúmeros
indicadosformanuntriánguloysiloformanquetipodetriánguloes(segúnsus
lados).*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("Ingrese el primer lado de un triangulo \n");
    scanf("%f", &x);
    printf("Ingrese el segundo lado de un triangulo \n");
    scanf("%f", &y);
    printf("Ingrese el tercer lado de un triangulo \n");
    scanf("%f", &z);
    printf("\n");
    if (x > y && x > z)
    {
        printf("El primer lado es el mayor!\n");
        if ((y + z) > x)
        {
            printf("Si se puede formar un triangulo!\n");
        }
        // tipo de triangulo escaleno/isoseles
        if (x != y && x != z && y != z)
        {
            printf("Es un triangulo escaleno!\n");
        }
        else if (y == z)
        {
            printf("Es un triangulo isoseles!\n");
        }
    }
    else if (y > x && y > z)
    {
        printf("El segundo lado es el mayor!\n");
        if ((x + z) > y)
        {
            printf("Si se puede formar un triangulo!\n");
        }
        // tipo de triangulo escaleno/isoseles
        if (x != y && x != z && y != z)
        {
            printf("Es un triangulo escaleno!\n");
        }
        else if (x == z)
        {
            printf("Es un triangulo isoseles!\n");
        }
    }
    else if (z > x && z > y)
    {
        printf("El tercer lado es el mayor!\n");
        if ((y + x) > z)
        {
            printf("Si se puede formar un triangulo!\n");
        }
        // tipo de triangulo escaleno/isoseles
        if (x != y && x != z && y != z)
        {
            printf("Es un triangulo escaleno!\n");
        }
        else if (y == x)
        {
            printf("Es un triangulo isoseles!\n");
        }
    }
    else if (x == y && y == z)
    {
        printf("TODOS LOS LADOS SON IGUALES! ES UN TRIANGULO EQUILATERO");
    }
    return 0;
}