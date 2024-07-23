#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main()
{                             // Función principal del programa
    char letra;               // Variable para almacenar el carácter ingresado por el usuario
    int num;                  // Variable para almacenar el código ASCII del carácter
    int octal[100], i = 1, j; // Variables para la conversión a sistema octal
    int cociente, residuo;    // Variables para el método de división sucesiva
    char hexadecimal[100];    // Variable para almacenar el número en sistema hexadecimal
    int u = 0;                // Índice para el arreglo hexadecimal

    printf("Ingresa una sola letra/caracter: "); // Pide al usuario que ingrese un carácter
    scanf(" %c", &letra);                        // Lee el carácter del teclado y lo almacena en la variable letra
    num = (int)letra;                            // Convierte el carácter a un número entero (código ASCII)

    printf("La letra/caracter ASCII ingresado tiene el numero: %d\n", num); // Muestra el código ASCII del carácter en sistema decimal

    for (cociente = num; cociente != 0; cociente /= 8)
    {                              // Bucle for para la conversión a sistema octal
        octal[i++] = cociente % 8; // Calcula el residuo de la división entre 8 y lo almacena en el arreglo octal
    }

    printf("El numero %d en sistema octal es: ", num); // Muestra el número en sistema octal
    for (j = i - 1; j > 0; j--)
    {                           // Recorre el arreglo octal en orden inverso
        printf("%d", octal[j]); // Imprime cada dígito del número en sistema octal
    }
    printf("\n"); // Imprime una nueva línea

    for (cociente = num; cociente != 0; cociente /= 16)
    {                            // Bucle for para la conversión a sistema hexadecimal
        residuo = cociente % 16; // Calcula el residuo de la división entre 16
        if (residuo < 10)
        {                                     // Si el residuo es menor que 10
            hexadecimal[u++] = '0' + residuo; // Almacena el dígito correspondiente en el arreglo hexadecimal
        }
        else
        {                                            // Si no
            hexadecimal[u++] = 'A' + (residuo - 10); // Almacena la letra correspondiente en el arreglo hexadecimal
        }
    }
    printf("El numero %d en sistema hexadecimal es: ", num); // Muestra el número en sistema hexadecimal
    for (j = u - 1; j >= 0; j--)
    {                                 // Recorre el arreglo hexadecimal en orden inverso
        printf("%c", hexadecimal[j]); // Imprime cada dígito o letra del número en sistema hexadecimal
    }
    printf("\n"); // Imprime una nueva línea

    return 0; // Finaliza la ejecución del programa con éxito
}
