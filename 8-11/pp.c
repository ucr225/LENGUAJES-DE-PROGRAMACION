#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[100];
    float matriz[1][1];

    printf("Por favor, ingresa un número: ");
    fgets(cadena, sizeof(cadena), stdin);

    matriz[0][0] = atof(cadena);

    printf("El número que ingresaste es: %.2f\n", matriz[0][0]);

    return 0;
}
