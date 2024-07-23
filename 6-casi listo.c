/**

 6.HacerunprogramaenCquenospermitaintroducirunnúmeroportecladoy
nosinformesiespositivoonegativo

**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>//metelo al validar SIEMPRE!!
//no funciona porque estas validando enteros!-NOCH EINMAL!!!
int esEntero(char *cadena) // nombre de la funcion,si la condicion se cumple,la variable arbitro sera 1,si no,sera 0
{
    int arbitro;
    for (int i = 0; cadena[i] != '\0'; i++) // for que recorre todo el char,El bucle continúa hasta que encuentra el carácter nulo '\0', que marca el final de la cadena en C
    {
        if (!isdigit(cadena[i])) // Esta línea usa la función 'isdigit' de la biblioteca 'ctype.h' para verificar si el carácter actual no es un dígito
        {
            return arbitro = 0; // si recorre la cadena y hay por lo menos un caracter,devuelve cero
        }
    }
    return arbitro = 1; // termina de recorrerse el arreglo y si todos son digitos entonces es true
    //
}

int main()
{
    int valido;
    char num[10];
    printf("Ingrese un numero: ");
    scanf("%s", num);

    while (valido != 1)
    {
        printf("Ingrese un numero: ");
        scanf("%s", num);
        if (esEntero(num))
        {
            valido = 1;
        }
        else
        {
            valido=0;
        }
    }

    if (num > 0)
    {
        printf("Es positivo");
    }
    else
    {
        printf("Es negativo");
    }

    getch();
}