// numeros primos de 0 a 100

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida. Esta biblioteca contiene las funciones para realizar operaciones de entrada y salida.

int main() // La función principal del programa. La ejecución del programa comienza en esta función.
{
    int i, j, contador; // Declara tres variables enteras: i, j y contador.

    for (i = 2; i <= 100; i++) // Un bucle for que recorre los números del 2 al 100.
    {
        contador = 0; // Inicializa el contador a 0 para cada nuevo número i.

        for (j = 2; j * j <= i; j++) // Un bucle for anidado que recorre los números del 2 hasta la raíz cuadrada de i.
        {
            if (i % j == 0) // Si i es divisible por j...
            {
                contador++; // Incrementa el contador en uno y...
                break;      // Rompe el bucle for anidado.
            }
        }

        if (contador == 0) // Si el contador sigue siendo 0 después de recorrer todos los posibles divisores...
        {
            printf("%d \n", i); // Imprime el número i, ya que es primo.
        }
    }

    return 0; // Retorna 0 para indicar que el programa se ejecutó correctamente.
}
