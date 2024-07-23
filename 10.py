"""
10.- Escribe un programa que lea del teclado dos números en coma flotante cuya parte entera se
asume que no supera 3 dígitos, y muestre en pantalla su suma ajustada a la derecha. Por
ejemplo, si los números son 23.6 y 187.54 el programa debe mostrar:
23,60
187,54
----------
211,14
"""

num1=input("Ingrese un numero: ")
num1=float(num1)
num2=input("Ingrese otro numero: ")
num2=float(num2)


while num1<0 or num1>999.99:
    num1=input("Ingrese un numero valido: ")
    num1=float(num1)


while num2<0 or num2>999.99:
    num2=input("Ingrese un numero valido: ")
    num2=float(num2)

num3=num1+num2
print(str(num1))
print(str(num2))
print("----------------")
print(str(num3))