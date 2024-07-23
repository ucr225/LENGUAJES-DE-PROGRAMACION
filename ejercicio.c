/*
  realiza un programa que lee un programa que lee una minuscula y la pasa a mayuscula
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main (){
    char letra,mayus;
    printf("Ingesa una letra: ");
    letra=getchar();
    mayus=toupper(letra);//para mayusculas con caracteres
    putchar(mayus); //tambien puedes restar 32 para mayus  o sumar 32 para minus  
    return 0;

}

