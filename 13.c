
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
/*13. PARES DEL 0 AL 100*/
int main(){
    int j=0;
    for (int i = 1; i<100; i++)
    {
        if (i%2==0)
        {
            printf("%d \n ",i);
            j++;

        }
        
    }
    printf("\n");
    
    getche();
}