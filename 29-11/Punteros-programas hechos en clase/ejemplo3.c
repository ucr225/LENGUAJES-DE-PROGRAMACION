#include <conio.h>
#include <stdio.h>

// EJEMPLO

int main()
{
    float m = 12.5;
    float *p;
    m = *p; // igual que *p=m
    *p=m;
    printf("DIRECCION DE P: %p \n", p);
    printf("VALOR DE P: %d \n", *p);
    getche();
}
