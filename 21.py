"""
21.- Dada la matriz de 4x4 2 -1 4 0
Se pide 1 2 -1 3
P = 5 2 -1 4
a) Cargar la matriz P y 8 9 10 1
Generar la matriz transpuesta.
b) Sumar los elementos de la diagonal principal de la matriz transpuesta.
c) Imprimir ambas matrices.

"""
matriz = [[2, -1, 4, 0], [1, 2, -1, 3], [5, 2, -1, 4], [8, 9, 10, 1]]

for i in range(len(matriz)):  # con len sabes el numero de filas y columnas
    for j in range(len(matriz[i])):
        print(matriz[i][j], end=" ")  # end=' ' a la función print(). Esto hace que print() añada un espacio en lugar de un salto de línea después de cada llamada.
    print()
print("SU MATRIZ INVERSA: ")
for i in range(len(matriz)):
    for j in range(len(matriz)):
        print(matriz[j][i],end=" ")
    print()
diagonal=0
for i in range(len(matriz)):
    for j in range(len(matriz)):
        if i==j:
            
            diagonal =diagonal+ matriz[i][j]
            
print("La diagonal: "+str(diagonal))