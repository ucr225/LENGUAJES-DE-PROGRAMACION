#include <conio.h>
#include <stdio.h>

// EJEMPLO

int main()
{
    int p=50,p2=50;
    int *pp;
    pp=&p;
    printf("DIRECCION DE P: %p \n",pp);
    printf("VALOR DE P: %d \n",*pp);	
    getche();
}
