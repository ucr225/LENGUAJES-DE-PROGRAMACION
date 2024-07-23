"""
16.- Ingrese por teclado los siguientes datos de un conjunto de alumnos: Nombre, edad, nota uno
con ponderación del 45%, nota dos con ponderación del 30% y nota tres con la ponderación
restante. Se pide:
a) Calcula la Nota final del estudiante e imprimirlo con su nombre.
b) Cuántos alumnos aprobaron y reprobaron.
Utilizar el ciclo while con respuestas del operador.

"""

nombre=[]
edad=[]
nota1=[]
nota2=[]
nota3=[]
final=[]
aprobados =0
reprobados=0
i=0
j=0
cantidad=int(input("Ingrese la cantidad de estudiantes: "))
print("---------------")
while i<cantidad:
    nombre.append(input("Ingrese el nombre: "))
    edad.append(int(input("Edad: ")))
    while edad[i] <0:
         edad.append(int(input("Edad valida por favor: ")))
    nota1.append(float(input("Ingrese la nota1: ")))
    nota2.append(float(input("Ingrese la nota2: ")))
    nota3.append(float(input("Ingrese la nota3: ")))
    print("---------------")
    final.append(((nota1[i]*9)/20) + ((nota2[i]*6)/20) + ((nota3[i]*5)/20))
    if final[i]>=9.5:
        aprobados=aprobados+1
    else:
        reprobados=reprobados+1
    i=i+1

while j<cantidad:
    print("nombre: "+nombre[j])
    print("nota final: "+str(final[j]))
    print("---------------")

    j=j+1
print("---------------------------")
print("Aprobados:" + str(aprobados))
print("reprobados:" + str(reprobados))
    
        