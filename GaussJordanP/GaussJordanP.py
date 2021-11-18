#Author: Elena Almanza García
#elena.almg@gmail.com
#Nov 18, 2021


#Se le pide al usuario que ingrese el numero de ecuaciones
numEcuaciones = int(input("Número de ecuaciones: "))

#definición del numero de filas y columnas
numFilas = numEcuaciones
numColumnas = numEcuaciones + 1

#declaración de matriz
matriz = []
for i in range (numFilas):
    matriz.append([0]*numColumnas)

#Se le pide al usuario que llene la matriz
for i in range (numFilas):
    for j in range (numColumnas):
        matriz[i][j] = int(input("Valor elemento ["+str(i)+"]["+str(j)+"]: "))


#GAUSS - JORDAN
#Matriz escalonada
for i in range(numFilas):
    for j in range(numFilas):
        if i != j:
            aux = float(matriz[j][i]) / float(matriz[i][i])
            for k in range(0, numColumnas):
                matriz[j][k] = float(matriz[j][k]) - (float(aux) * float(matriz[i][k]))
        else:
            print("El sistema no tiene solución")

#Hacer 1's en la diagonal principal
for i in range(numEcuaciones):
    pivote = float(matriz[i][i])
    for j in range (0, numColumnas):
        matriz[i][j] = float(matriz[i][j]) / pivote


#Imprimir la solución
print("Solución:\n")
for i in range(numEcuaciones):
    print("x"+str(i),"=",str(matriz[i][numEcuaciones]),"\n")
