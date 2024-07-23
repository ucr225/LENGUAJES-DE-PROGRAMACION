#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int opcion, one, two, three, arbitro;
    float k, a, promedio = 0;
    char nombre[20];
    char sexo;
    // strcmp();

    // putchar(opcion);
    // clrscr();
    printf("=======INGRESE UNA OPCION,LAS OPCIONES SON : ==============\n");
    printf("1) Calcular el valor de K,cuyo resultado es la raiz cuadrada de un numero ingresado por usted.\n");
    printf("2) Ingresar 3 valores para intercambiarlos entre si \n");
    printf("3) Saber  si un alumno esta reprobado ingresando nombre,apellido y promedio \n");
    printf("4) SALIR \n");
    scanf("%d", &opcion); // no espacio entre las comillas,todo pegado
    while (opcion < 1 || opcion > 4)
    {
        printf("=======INGRESE UNA OPCION VALIDA,LAS OPCIONES SON : ==============\n");
        printf("1) Calcular el valor de K,cuyo resultado es la raiz cuadrada de un numero ingresado por usted.\n");
        printf("2) Ingresar 3 valores para intercambiarlos entre si \n");
        printf("3) Saber  si un alumno esta reprobado ingresando nombre,apellido y promedio \n");
        printf("4) SALIR \n");
        scanf(" %d ", &opcion);
    }
    // system("cls");
    if (opcion == 1)
    {
        printf("Ingrese un numero mayor a cero para calcular la raiz cuadrada: \n");
        scanf("%f", &a);
        while (a < 0)
        {
            printf("Ingrese un numero MAYOR! a cero para calcular la raiz cuadrada: \n");
            scanf("%f", &a);
        }

        k = sqrt(a);
        printf("El resultado es: %2.f\n", k);
    }
    else if (opcion == 2)
    {
        printf("INGRESE UN NUMERO PARA LA A \n");
        scanf("%d", &one);
        printf("INGRESE UN NUMERO PARA LA B  \n");
        scanf("%d", &two);
        printf("INGRESE UN NUMERO PARA LA C  \n");
        scanf("%d", &three);
        printf("El valor de A: %d \n", one);
        printf("El valor de B: %d \n", two);
        printf("El valor de C: %d \n", three);

        ////
        arbitro = one;

        one = two;

        two = three;
        three = arbitro;

        printf("El valor de  A: %d \n", one);
        printf("El valor de  C: %d \n", two);
        printf("El valor de  B: %d \n", three);
    }

    else if (opcion == 3)
    {
        // ASI LIMPIAS
        int temp;
        while ((temp = getchar()) != '\n' && temp != EOF)
            ; // This will consume the newline

        printf("Ingrese el sexo: ");
        sexo = getchar(); // obtiene el caracter

        // Notice the space before %c,asi se salta el espacio
        printf("Ingrese el nombre y apellido: ");
        scanf("%s", nombre);

        printf("Ingrese el promedio: \n");
        scanf("%f", &promedio);
        if (promedio >= 9.5)
        {
            printf("Estimado, %s \n", nombre);
            printf("De sexo %c \n");
            putchar(sexo);
            printf("Cuyo promedio: %f \n", promedio);
            printf("ESTA APROBADO!!");
        }
        else
        {
            printf("Raspao!");
        }
    }

    getche();
}
