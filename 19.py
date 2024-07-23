"""
19.- Una persona tiene una cuenta corriente en un Banco Nacional con un monto inicial de 520
Bolívares Fuertes. La persona ingresa por teclado su clave de acceso compuesta de cuatro
dígitos y luego una opción numérica para realizar las siguientes operaciones:
1.- Consulta saldo.
2.- Retiro (El monto de retiro se ingresa por teclado).
3.- Deposito (El monto de deposito se ingresa por teclado).
Efectuar un algoritmo para:
a) Ingresar la clave de acceso y validar.
b) Ingresar la opción del usuario y realizar la transacción solicitada. (Imprima saldo).
c) Validar todas las opciones e incluso cuando esta sea incorrecta.

"""
saldo=520

clave=input("ESTIMADO USUARIO,POR FAVOR CREE UNA CONTRASENA")
print("--CONTRASENA CREADA--")
print()
comparacion=input("***BUENAS ESTIMADO USUARIO,INGRESE SU CONTRASENA PARA INGRESAR**")

while comparacion!=clave:
    comparacion=input("INCORRECTO,INTENTE DE NUEVO")
print("===CLAVE CORRECTA,BIENVENIDO===")

opcion=int(input("Ingrese el numero uno para consultar saldo,numero 2 para retirar,numero 3 para depositar,4 para salir: "))

if opcion==1:
    print("Su saldo es: "+str(saldo))
elif opcion==2:
    retiro=float(input("Ingrese su saldo a retirar: "))
    while retiro>saldo:
        retiro=float(input("Saldo insuficiente!.Ingrese un monto valido: "))
    saldo=saldo-retiro
    print("Su nuevo saldo: "+str(saldo))
elif opcion ==3:
    deposito=float(input("Ingrese monto a deposito: "))
    saldo=deposito+saldo
    print("Su nuevo saldo: "+str(saldo))
elif opcion ==4:
    print("Gracias por usar nuestros servicios!!")

