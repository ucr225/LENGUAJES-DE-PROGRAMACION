#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

long factorial(int n)
{
    register int i;
    long total = 1;
    for (int i = 1; i < n; i++)
    {
        total *= i;
    }
    return total;
}

int main()
{
    int num;
    printf("Ingresa un numero: \n");
    scanf("%d", &num);
    printf("%ld", factorial(num));
}