/*18.- En una elección realizada en un municipio, se presentaron tres candidatos: Pedro, María y
Juan. Por cada votante se elaboró un registro así: Cédula de Identidad y el valor del voto.
El voto puede desarrollarse de la siguiente manera:
- Si votó por Pedro su valor es uno.
- Si votó por María su valor es dos.
- Si votó por Juan su valor es tres.
Se pide:
a) Cuantos votos obtuvo cada candidatos.
b) Cuántos votos son nulos (voto nulo cualquier otro dígito).
c) Quien gano las elecciones.
Utilizar el ciclo while con respuesta al operador.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

main()
{
    int pedro = 0;
    int maria = 0;
    int juan = 0;
    int cedula[100];
    int votos = 0;
    int nulos = 0;
    int voto = 0;

    printf("Por favor indique el numero de votantes: \n");
    scanf("%d", &votos);

    for (int i = 0; i < votos; i++)
    {
        printf(" Estimado votante  numero %d ,ingrese su cedula: ", i + 1);
        scanf("%d", &cedula[i]);

        printf(" Su voto puede ir a los siguientes candidatos: \n");
        printf(" El voto puede desarrollarse de la siguiente manera: \n Si voto por Pedro su valor es uno\n Si voto por María su valor es dos\n Si voto por Juan su valor es tres \n Cualquier otro numero sera considerado como voto nulo \n");
        printf("Por favor ingrese el numero de su candidato: \n");
        scanf("%d", &voto);
        switch (voto)
        {
        case 1:
            pedro++;
            printf("Usted voto por pedro \n");
            break;
        case 2:

            maria++;
            printf("Usted voto por maria \n");
            break;
        case 3:
            juan++;
            printf("Usted voto por juan \n");

        default:
            nulos++;
            printf("Su voto es nulo! \n");
            break;
        }

    printf("\n");
    printf("Hay %d votos por Pedro",pedro);
       printf("\n");
    printf("Hay %d votos por Maria",maria);
       printf("\n");
    printf("Hay %d votos por Juan",juan);
       printf("\n");
    printf("Hay %d votos nulos",nulos);
       printf("\n");
    
       
    }
    if (pedro>maria && pedro>juan)
    {
        printf("GANO PEDRO! \n");
    }
    else if (maria>pedro && maria>juan)
    {
        printf("GANO MARIA! \n");
    }
    else  if (juan>pedro && maria<juan)
    {
        printf("GANO JUAN! \n");
    }else if (nulos>pedro && nulos>maria && nulos>juan) {
        printf("NO HAY GANADOR,LA MAYOR CANTIDAD DE VOTOS SON NULOS ! \n");
    }
     return 0;
    
}
//hacer validaciones cuando la cedula es igual para dos votantes 
