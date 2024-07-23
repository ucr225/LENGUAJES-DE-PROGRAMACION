# Ingrese por teclado dos números y calcular la suma, resta y multiplicación entre ellos. Imprimir
# cada uno de los resultados acompañado de un mensaje orientado al usuario


num1 = input("Ingrese un numero: ")  # primero ingresas variable,despues parseas
num1=float(num1) #debes colocar el nombre de la variable,igual al parseo
num2 = input("Ingrese un numero: ")
num2=float(num2)

sum = num1 + num2

if num1 > num2:
    rest = num1 - num2
    print("La resta: " + str(rest))
elif num2>num1:
    rest = num2 - num1
    print("La resta es sabiendo que el primer numero es menor que el segundo,por lo tanto,se resta primero el segundo: " + str(rest))
mult= num1*num2 
div=num1/num2
#siempre al imprimir numeros,parseas a string!
print("La suma: " + str(sum))



print("La multiplicacion: " + str(mult))
print("La division: {:.2f}".format(div)) #asi regulas los decimales,no debes parsear a string para imprimir
