"""
6. Una temperatura en grados centígrados C, puede ser convertida en su valor equivalente de la
escala Fahrenheit de acuerdo a la siguiente fórmula: F = (9 / 5) C + 32

"""
centigrados= input("Ingrese su temperatura en grados centigrados: ")
centigrados= float(centigrados)

farenheit= ((9/5)*centigrados)+32

print("La temperatura en grados Farenheit es de: {:.2f}".format(farenheit))