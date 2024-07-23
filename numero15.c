/*15.- Leer un número entero y calcular el factorial. Validar todas las opciones posibles. Utilizar el
ciclo while con respuesta al operador.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

main(){
    int num,result=1;
    printf("Ingresa un numero para calcular su factorial\n");
    scanf("%d",&num);

    for (int i = 2; i <= num; i++)
    {
        result=result*i;
    }
    printf("El resultado es: %d\n",result);


    return 0;
}


