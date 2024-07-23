"""
3.- Ingrese por teclado los datos de una llamada telefónica, nombre, número de teléfono, y
cantidad de minutos de la llamada (valor entero). Se pide calcular el monto de la llamada
telefónica teniendo presente lo siguiente:
a.- Si la duración de la llamada telefónica es hasta tres (3) minutos inclusive, se cobrara una tarifa
básica de 400 Bs.
b.- Si la llamada se excede más de tres (3) minutos se cobrara la tarifa básica y por cada minuto
adicional al básico 600 Bs.
c.- Imprimir el monto de la llamada telefónica con el nombre del usuario.

"""

nombre= input("Ingrese su nombre: ")
tlf= input("Ingrese su num de telefono: ")
minutos= input("Ingrese los minutos que duro la llamada,debe ser un valor entero: ")
minutos=int(minutos)
if minutos <=3:
    print("Estimado,"+nombre)
    print("El numero de telefono que ingreso es: "+tlf)
    print("Usted debe pagar 400Bs")
else:
    adicional = minutos - 3
    tarifa = 400 + (adicional * 600)
    print("Usted debe pagar como monto total Bs " + str(tarifa))
    print("Estimado,"+nombre)
    print("El numero de telefono que ingreso es: "+tlf)
    
    print("Usted debe pagar como monto total Bs "+str(tarifa))


