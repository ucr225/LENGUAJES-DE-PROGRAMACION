/**
7.HacerunprogramaenCquenospermitaintroducirunnúmeroportecladoy
nosinformesiesparoimpar



**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
int main()
{
    int num;
    printf("Ingrese un numero");
    scanf("%d", &num); //ojo con la F
    if (num % 2 == 0) // comprobacion par o impar
    {
        printf("ES PAR!!");
    }
    else 
    {
        printf("ES IMPAR!!");
    }

    getche();
}
