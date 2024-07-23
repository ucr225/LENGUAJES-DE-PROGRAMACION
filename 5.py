"""
5.-Sean dos cuadrados de lados L1 y L2 inscritos uno en otro. Calcula el área de la zona
comprendida entre ambos, utilizando para ello una función (que se llamará Área Cuadrado) que
devuelve el área de un cuadrado cuyo lado se pasa como argumento

"""

lado1 =input("Ingrese el valor del lado del primer cuadrado: ")
lado1=float(lado1)
lado2 =input("Ingrese el valor del lado del segundo cuadrado: ")
lado2=float(lado2)

if lado1>lado2:
    area=(lado1**2)-(lado2**2)
    print("El area es de: {:.2f}".format(area))
elif lado1<lado2:
    area=(lado2**2)-(lado1**2)
    print("El area es de: {:.2f}".format(area))
elif lado1==lado2:
    print("No hay area,ambos cuadrados son del mismo tamano")