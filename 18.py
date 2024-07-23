"""
18.- En una elección realizada en un municipio, se presentaron tres candidatos: Pedro, María y
Juan. Por cada votante se elaboró un registro así: Cédula de Identidad y el valor del voto.
El voto puede desarrollarse de la siguiente manera:
- Si votó por Pedro su valor es uno.
- Si votó por María su valor es dos.
- Si votó por Juan su valor es tres.
Se pide:
a) Cuantos votos obtuvo cada candidatos.
b) Cuántos votos son nulos (voto nulo cualquier otro dígito).
c) Quien gano las elecciones.
Utilizar el ciclo while con respuesta al operador.

"""
i=0
pedro=0
maria=0
juan=0
nulos=0

votantes=int(input("Ingrese el numero de votantes: "))
print("----------------------------------------------------------------")

print("Presione el #1 si va a votar por Pedro")
print("Presione el #2 si va a votar por Maria")
print("Presione el #3 si va a votar por Juan")
print("SI USTED COLOCA UN NUMERO DIFERENTE,EL VOTO SERA CONSIDERADO NULO")
print("----------------------------------------------------------------")
while i<votantes:
    voto=int(input("Ingrese su voto: "))
    if voto==1:
        print("Usted voto por Pedro")
        pedro=pedro+1
    elif voto==2:
         print("Usted voto por Maria")
         maria=maria+1
    elif voto==3:
         print("Usted voto por Juan")
         juan=juan+1
    elif voto<1 or voto>3:
         print("SU VOTO SE HA CONSIDERADO NULO!! ")
         nulos=nulos+1
    i=i+1
print("----------------------------------------------------------------")
if pedro>maria and pedro>juan and pedro>nulos:
    print("GANO PEDRO!!")
elif maria>pedro and maria>nulos and maria>juan:
    print("GANO MARIA!!")
elif juan>pedro and juan>nulos and juan>maria:
    print("GANO JUAN!!")
else:
    print("NO HAY GANADOR,LA MAYORIA DE LOS VOTOS SON NULOS")
print("----------------------------------------------------------------")    
print("Cantidad de votos de Pedro: "+str(pedro))
print("Cantidad de votos de Maria: "+str(maria))
print("Cantidad de votos de Juan: "+str(juan))
print("Cantidad de votos de nulos: "+str(nulos))