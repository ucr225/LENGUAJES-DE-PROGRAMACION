

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void  saludo(char nombre[]){

    printf("Hola estimado: %s\n",nombre);
    
}

int main(){
    char nombre[100];

    printf("Ingresa tu nombre: \n");
    
    scanf("%s",nombre);
    saludo(nombre);
    getche();
}