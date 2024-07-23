"""
11.- Escribe un programa que lea 2 números enteros de 3 dígitos e imprima su producto. Por
ejemplo, si los números son 325 y 426 se presentará en el formato
325
x 426
------------
1950
650
1300
------------
138450

"""
num = input("Ingrese un numero: ")
num = int(num)

while num < 100 or num > 999:
    num = input("Ingrese un numero: ")
    num = int(num)

num2 = input("Ingrese un numero: ")
num2 = int(num2)

while num2 < 100 or num2 > 999:
    num = input("Ingrese un numero: ")
    num = int(num2)

digito1 = num2 // 100  # asi obtienes el digito de la centena
digito2 = (num2 % 100) // 10  # el de la decena
digito3 = num2 % 10  # el de las unidades
parte1 = digito3*num
parte2 = digito2*num
parte3 = digito1*num
result =num*num2
print("  "+str(num))
print("x " + str(num2))
print("-----------------------")
print(str(parte1))
print(str(parte2))
print(str(parte3))
print("-----------------------")
print(str(result))