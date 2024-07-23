/*17.- Ingrese por teclado los siguientes datos de un cliente de un Banco: Nombre, edad, Monto
Deposito, Tasa, Tiempo, se pide:
a) Calcular el interés a pagar por el monto depositado e imprimirlo con el nombre del cliente.
I = (M * Tasa * Tiempo) /100 I = Intereses
M = Monto Depositado
a) Cuantos intereses se encuentran entre 2.000 Bsf. y 45.000 Bsf. Inclusive.
b) Sumar todos los montos depositados.
Utilizar el ciclo while usando un valor centinela ciego*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

main()
{
    char nombre[100][100];
    int edad[100];
    float monto[100];
    // float deposito[100];
    float tasa[100];
    int tiempo[1000];
    float interes[100];
    int num;
    int intervalo = 0;
    float sumas = 0;
    int i = 0;

    do
    {
        printf("Ingresa el nombre : ", i + 1);
        scanf("%s", nombre[i]); // asi se guarda en el arreglo de nombre bidimensional
        printf("Ingrese la edad \n");
        scanf("%d", &edad[i]);
        printf("Ingrese el monto a depositar \n");
        scanf("%f", &monto[i]);
        sumas += monto[i];
        // printf("Ingrese el deposito \n");
        // scanf("%f", &deposito[i]);

        printf("Ingrese la tasa \n");
        scanf("%f", &tasa[i]);
        printf("Ingrese el tiempo en meses \n");
        scanf("%d", &tiempo[i]);
        printf("\n");

        interes[i] = (monto[i] * tasa[i] * tiempo[i]) / 100;
        if (interes[i] >= 2000 && interes[i] <= 45000)
        {
            intervalo++;
        }
        printf("El interes a pagar del cliente %s es de %2.f bolivares \n", nombre[i], interes[i]);
        printf("Hay un total de %d intereses entre 2000 y 45000 bolivares \n", intervalo);
        printf("La suma de los montos es de %2.f\n", sumas);
        printf("\n");
        i++; //

        printf("**Ingrese el numero 1 para terminar de ejecutar el programa.**\n **Cualquier numero para volver a ejecutarlo**\n");
        scanf("%d", &num);
        printf("\n");
        printf("\n");
    } while (num != 1);

    return 0;
}