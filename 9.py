"""
9.- Escribe un programa que lea del teclado un carácter cualquiera y presenta en pantalla su
código ASCII en decimal, octal y hexadecimal

"""

letra = input("Por favor, escribe un carácter: ")
valor_ascii = ord(letra)  # esto permite convertir la letra en el valor ascii
octal = oct(valor_ascii)  # asi se pasa octal
# .lstrip("0o") eso es para quitar el prefix
hexadecimal = hex(valor_ascii)  # asi a hexadecimal
# .lstrip("0x") eso es para quitar el prefix
print(
    "El carácter"
    + letra
    + " en la tabla ASCII corresponde al número"
    + str(valor_ascii)
)

print("El carácter" + letra + " en octal es: " + octal)

print("El carácter" + letra + " en hexadecimal  es: " + hexadecimal)
