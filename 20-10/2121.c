#include <stdio.h>

void print_border(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    char texto[1000];
    FILE *fptr;

    fptr = fopen("notas.txt", "w");
    if (fptr == NULL) {
        printf("Error al abrir el archivo!");
        return 1;
    }

    print_border(50);
    printf("Introduce texto para escribir en el archivo: \n");
    fgets(texto, sizeof(texto), stdin);
    print_border(50);

    fprintf(fptr, "%s", texto);
    fclose(fptr);

    printf("¡Texto guardado en el archivo notas.txt!\n");
    print_border(50);

    return 0;
}
