#2.- Ingrese por teclado los siguientes datos de un alumno: Nombre, Nota uno, Nota dos y Nota
#tres. Se pide calcular, el promedio de las calificaciones del estudiante e imprimirlo con su nombre.

nombre =input("Ingrese su nombre: ")
nota1 =input(" Ingrese su Nota 1: ")
nota1 = float(nota1)
nota2 =input(" Ingrese su Nota 2: ")
nota2 = float(nota2)
nota3 =input(" Ingrese su Nota 3: ")
nota3 = float(nota3)

prom = (nota1+nota2+nota3)/3
print("Estimado,"+ nombre+ "\n ")
print("El promedio es: {:.2f}".format(prom)) #asi regulas los decimales,no debes parsear a string para imprimir
