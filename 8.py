"""
8.- Escribe un programa que lea del teclado un código ASCII (entero comprendido entre 0 y 255)
y presente en pantalla el carácter correspondiente.

"""
num = input("Ingresa un numero ")
num = int(num)
while num < 0 or num > 255:
    num = input("Ingresa un numero valido: ")
    num = int(num)

print("El carácter ASCII correspondiente al número " + str(num) + " es: '" + chr(num) + "'")

#con CHR obtienes el valor en la tabla ascii
"""
Esta es una cadena de formato (f-string) en Python. 
Permite la interpolación de variables en cadenas de texto. En este caso, se están interpolando dos variables: num y chr(num). 
La variable num se inserta directamente en la cadena de texto.
La función chr(num) convierte el número en su equivalente de carácter ASCII.
"""
