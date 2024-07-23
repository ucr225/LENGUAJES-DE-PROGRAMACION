/*19.- Una persona tiene una cuenta corriente en un Banco Nacional con un monto inicial de 520
Bolívares Fuertes. La persona ingresa por teclado su clave de acceso compuesta de cuatro
dígitos y luego una opción numérica para realizar las siguientes operaciones:
1.- Consulta saldo.
2.- Retiro (El monto de retiro se ingresa por teclado).
3.- Deposito (El monto de deposito se ingresa por teclado).
Efectuar un algoritmo para:
a) Ingresar la clave de acceso y validar.
b) Ingresar la opción del usuario y realizar la transacción solicitada. (Imprima saldo).
c) Validar todas las opciones e incluso cuando esta sea incorrecta.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

main()
{
    float saldo = 520;
    int opcion = 0;
    char clave[100];
    char ingreso[100];
    float monto = 0;
    int comparacion; // si es cero,es que las cadenas son iguales

    printf("Hola estimado,por favor cree su contraseña de hasta maximo 20 digitos: \n");
    fgets(clave, 20, stdin); // pones la coma para limitar la cantidad de caracteres

    printf("Estimado usuario,su clave fue creadada: \n");
    printf("Ahora para iniciar sesion,ingrese su clave: \n");
    fgets(ingreso, 20, stdin);
    comparacion = strcmp(clave, ingreso);

    while (comparacion != 0)
    {
        printf("CLAVE INCORRECTA,INGRESELA DE NUEVO \n");
        fgets(ingreso, 20, stdin);
        comparacion = strcmp(clave, ingreso);
    }
    printf("==================CLAVE ESCRITA CORRECTAMENTE,BIENVENIDO=================== \n");

    printf("PULSE EL NUMERO 1 PARA CONSULTAR SALDO\n PULSE EL NUMERO 2 PARA DEPOSITO \n PULSE EL NUMERO 3 PARA RETIRAR \n");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("==================USUARIO,SU SALDO ES DE Bs.%f =================== \n", saldo);
        break;
    case 2:
        printf("==================INGRESE EL MONTO A DEPOSITAR: =================== \n");
        scanf("%f", &monto);
        saldo = monto + saldo;
        printf("==================USUARIO,SU SALDO NUEVO ES DE Bs.%f =================== \n", saldo);
        break;
    case 3:
    printf("==================INGRESE EL MONTO A RETIRAR: =================== \n");
        scanf("%f", &monto);
        while (saldo<monto)
        {
            printf("SU CUENTA NO CUENTA CON LOS SUFICIENTES FONDOS PARA EL RETIRO,POR FAVOR INGRESE UN MONTO MENOR \n");
            scanf("%f", &monto);
        }
        
        saldo = saldo-monto;
        printf("==================USUARIO,SU SALDO NUEVO ES DE Bs.%f =================== \n", saldo);
        break;

    default:
         printf("==================POR FAVOR INGRESE UNA OPCION CORRECTA=================== \n");
        break;
    }

    return 0;
}