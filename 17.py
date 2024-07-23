"""
17.- Ingrese por teclado los siguientes datos de un cliente de un Banco: Nombre, edad, Monto
Deposito, Tasa, Tiempo, se pide:
a) Calcular el interés a pagar por el monto depositado e imprimirlo con el nombre del cliente.
I = (M * Tasa * Tiempo) /100 I = Intereses
M = Monto Depositado
a) Cuantos intereses se encuentran entre 2.000 Bsf. y 45.000 Bsf. Inclusive.
b) Sumar todos los montos depositados.
Utilizar el ciclo while usando un valor centinela ciego.
"""

nombre=[]
edad=[]
deposito=[]
interes=[]
depositos=0
encima=0
tasa=[]
tiempo=[]

i=0
j=1

print("--------")
while j!=0:
    nombre.append(input("Ingrese el nombre: "))
    edad.append(int(input("Ingrese la edad: ")))
    deposito.append(float(input("Ingrese el monto deposito: ")))
    tasa.append(float(input("Ingrese la tasa: ")))
    tiempo.append(int(input("Ingrese el tiempo en anos: ")))
    interes.append((deposito[i]*tasa[i]*tiempo[i])/100)
    depositos=deposito[i]+depositos
    if interes[i] >2000 or interes[i] <45000:
        encima=encima+1
    print("Nombre: " + nombre[i])
    print("Edad: " + str(edad[i]))
    print("Interes a pagar: " + str(interes[i]))
    print("Depositos en el intervalo establecido: " + str(encima))
    print("La sumatoria de todos los depositos es: " + str(depositos))
    
    i=i+1

    
    j=(int(input("Ingrese el numero 0 para salir,cualquiera para repetir")))
   

    
