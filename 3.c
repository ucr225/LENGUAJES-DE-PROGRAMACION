/***
3.De10númerosingresadosindicarcuantossonmayoresaceroycuantos
sonmenoresacero.


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    float num[10];
    int mayores = 0;
    int menores = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%f", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (num[i] < 0)
        {
            menores++;
        }
        else
        {
            mayores++;
        }
    }
    printf("\n");
    printf("Mayores que cero: %d\n", mayores);

    printf("Menores que cero: %d\n", menores);

    getch();
}