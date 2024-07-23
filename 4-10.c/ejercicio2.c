
/*


En una universidad están interesados en que elabores un programa en me lguaje C, para controlar el proceso de inscripción.
Para ello le suministran los siguientes datos de cada alumno:
número de expediente, nombre, edad, sexo, unidades de crédito inscritas, valor de la UC, facultad a estudiar
 (a=administración, I=ingeniería, e=educación).
1-Se pide: calcular el monto a pagar de inscripción por cada alumno en lmprimirlo con su nombre
(es importante resaltar que la unidad de crédito por facultades es igual,
excepto los alumnos que van a estudiar ingeniería en sistemas,
que pagarán 50$ adicionales por derecho al laboratorio de computación).
2- porcentaje de alumnos inscritos por facultad.
3- promedio de edad de los alumnos inscritos en administración.
4- utilizar el ciclo while con respuesta al operador.


*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int expediente, unidades, edad, ingenieros=0, administradores=0, educadores=0, total = 0, sumaedades;
    char nombre[20];
    char sexo[20];
    float valor, pinge = 0, padmin = 0, pedu = 0;
    char facultad;
    float inscripcion = 0, pedad = 0;
    char terminar;
    while (terminar != 'N')
    {
        

        printf("Ingrese su numero de expediente...");
        scanf("%d", &expediente);
        printf("Ingrese su nombre...");
        scanf("%s", &nombre);
        printf("\n");
        printf("Ingrese su edad...");
        scanf("%d", &edad);

        printf("Ingrese su sexo,escriba masculio/femenino...");
        scanf("%s", &sexo);
        printf("\n");
        printf("Ingrese la cantidad de UC inscritas...");
        scanf("%d", &unidades);
        printf("\n");
        printf("Ingrese el costo de la UC...");
        scanf("%f", &valor);
        printf("\n");
        printf("Ingrese la letra correspondiente a su facultad: A para administracion,I para ingenieria,E para educacion...");
        getchar();                    // consume the newline character
        facultad = getchar();         // read the faculty character
        facultad = toupper(facultad); // convert to uppercase
        // putchar(facultad);            // print the faculty character
        while (facultad != 'A' && facultad != 'I' && facultad != 'E') // se debe  usar la &&
        {
            printf("INVALIDO! POR FAVOR! Ingrese la letra correspondiente a su facultad: A para administracion,I para ingenieria,E para educacion...");
            getchar();                    // consume the newline character
            facultad = getchar();         // read the faculty charact-------er
            facultad = toupper(facultad); // convert to uppercase
                                          // putchar(facultad);            // print the faculty character
        }
        if (facultad == 'I')
        {
            inscripcion = (unidades * valor) + 50;
            ingenieros++;

            printf("Estimado %s , usted estudiara Ingenieria,su monto para inscribirse es de %.2f\n", nombre, inscripcion);
        }
        else if (facultad == 'A')
        {
            inscripcion = unidades * valor;
            administradores++;
           
            sumaedades += edad;

            printf("Estimado %s , usted estudiara Administracion ,su monto para inscribirse es de %.2f\n", nombre, inscripcion);
        }
        else if (facultad == 'E')
        {
            inscripcion = unidades * valor;
            educadores++;
            printf("Estimado %s , usted estudiara Educacion ,su monto para inscribirse es de %.2f\n", nombre, inscripcion);
        }

        total++;

        printf("Desea continuar? S/N: ");
        getchar();
        terminar = getchar();
        terminar = toupper(terminar);
        while (terminar != 'N' && terminar != 'S')
        {
            printf("CARACTER INVALIDO! POR FAVOR INGRESE UNO CORRECTO!\n");
            printf("Desea continuar? S/N: ");
            getchar();
            terminar = terminar = getchar();
            toupper(terminar);
        }
    }
    pinge = (ingenieros * 100) / total;
    pedu = (educadores * 100) / total;
    padmin = (administradores * 100) / total;
    pedad = sumaedades / administradores;
    printf("Hay un total de %2.f puntos porcentuales de ingenieros.\n", pinge);

    printf("Hay un total de %2.f puntos porcentuales de administradores\n", padmin);

    printf("Hay un total de %2.f puntos porcentuales de educadores.\n", pedu);
    printf("El promedio de edad de los administradores es de %2.f \n", pedad);

    getche();
}