#include <conio.h>
#include <stdio.h>

// EJEMPLO

int main()
{
    int valor1 = 10;
    int *p = &valor1;

    printf("VALOR DE LA VARIABLE: %d\n", valor1);
    *p = 30;
    printf("VALOR DE LA VARIABLE: %d\n", valor1);
    getche();
}
