/*
10.EscribirenPseudocódigoycodificarenCunprogramaquelea20
caracteres.Luegodelalecturaindicarcuantas"a"seingresaron,cuantas"e,i,o,
u"

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char palabra[50];
    int a=0, e=0, i=0, o=0, u=0, size;

    printf("Ingresa una palabra: \n");
    scanf("%s", palabra);
    size = strlen(palabra);

    for (int j = 0; j < size; j++)
    {
        if (palabra[j] == 'a')
        {
            a++;
        }
        else if (palabra[j] == 'e')
        {
            e++;
        }
        else if (palabra[j] == 'i')
        {
            i++;
        }
        else if (palabra[j] == 'o')
        {
            o++;
        }
        else if (palabra[j] == 'u')
        {
            u++;
        }
    }
    printf("CANTIDAD DE VOCALES: \n");
    printf("A: %d", a);
    printf("\n");
    printf("E: %d", e);
    printf("\n");

    printf("I: %d", i);
    printf("\n");

    printf("O: %d", o);
    printf("\n");

    printf("U: %d", u);

    getche();
}