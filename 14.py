"""
14.- Ingresar por teclado los siguientes datos de un conjunto de empleados: nombre, edad, sexo,
monto de asignación mensual y monto de deducción mensuales. Se pide:
a) Calcular el sueldo actual del empleado e imprimirlo con su nombre.
b) Edad promedio de los hombres.
c) Porcentaje de mujeres y hombres.
d) Cuantos sueldos netos mensuales son mayores a 450 Bs.F.
Utilizar el haga mientras con una respuesta del operador.
"""
nombre = []  # primero declaras la lista vacia
genero = []
edad = []
asignacion = []
deduccion = []
sueldo = []
mujer = 0
hombre = 0
etotal = 0
mayores = 0
cantidad = input("Ingrese la cantidad de empleados: ")
cantidad = int(cantidad)

for i in range(0, cantidad):
    nombre.append(input("Nombre"))  # asi se agregan elementos al arreglo
    genero.append(int(input("Ingrese el genero,1 para mujer y 2 para hombre: ")))

    while genero[i] < 1 or genero[i] > 2:
        genero.append(
            int(input("Ingrese otra vez el genero,1 para mujer y 2 para hombre: "))
        )
    edad.append(int(input("Ingrese la edad:")))

    asignacion.append(float(input("Ingrese el monto de asignacion: ")))

    deduccion.append(float(input("Ingrese el monto de deduccion: ")))
    if genero[i] == 1:
        mujer += 1
    else:
        hombre += 1
        etotal += edad[i]
    sueldo.append(asignacion[i] - deduccion[i])
    if sueldo[i] > 450:
        mayores += 1
edadprom = etotal / hombre
for i in range(0, cantidad):
    print("El nombre del empleado numero: ", i + 1, " es " + nombre[i])
    print("La edad del empleado numero: ", i + 1, " es " + str(edad[i]))
    print("El sueldo del empleado numero: ", i + 1, " es " + str(sueldo[i]))


print("Numero de hombres: " + str(hombre))
print("Numero de mujeres: " + str(mujer))
print("Edad promedio de hombres: " + str(edadprom))
print("Sueldos mayores a 450 Bs: " + str(mayores))
