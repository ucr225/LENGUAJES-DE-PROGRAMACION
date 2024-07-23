"""
4.- Escribe un programa que calcule el área de un círculo de radio R y la longitud de su
circunferencia. Solicitar el valor de R por teclado, mostrando en la pantalla los mensajes
necesarios (S = π ⋅ R2 ; L = 2 ⋅ π ⋅ R).

"""
import math #para usar la constante pi
pi = math.pi
radio=input("Ingrese el valor del radio")
radio=float(radio)

superficie= pi*radio**2
longitud=pi*radio*2

print("El valor de la superficie es de: {:.2f}".format(superficie))
print("El valor de la longitud es de: {:.2f}".format(longitud))