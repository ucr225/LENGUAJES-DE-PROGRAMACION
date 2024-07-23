"""
15.- Leer un número entero y calcular el factorial. Validar todas las opciones posibles. Utilizar el
ciclo while con respuesta al operador.

"""
num=int(input("Ingrese un numero para calcular su factorial "))
factorial =1
i=2
while i<=num:
    factorial *=i
    i=i+1
print("El resultado es: " + str(factorial))
