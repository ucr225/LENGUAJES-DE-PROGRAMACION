#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 main()
{
    char sex;
    printf("Ingrese el sexo: ");
    sex=getchar(); //obtiene el caracter
    
    sex=toupper(sex);
    putchar(sex);//lo imprime
    getche();
}
