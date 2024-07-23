#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
/*12.EscribirenPseudocódigoycodificarenCunprogramaquemuestrelos
númerosimparesentre0y100yqueimprimacuantosimpareshay*/
int main(){
    int j=0;
    for (int i = 0; i<100; i++)
    {
        if (i%2!=0)
        {
            printf("%d \n ",i);
            j++;

        }
        
    }
    printf("\n");
    printf("HAY %d  numeros impares\n",j);
    getche();
}