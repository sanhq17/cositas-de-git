import matplotlib.pyplot as plt

tiempo = []
altura = []

with open("datos.txt", "rt") as archivo:
    for linea in archivo:
        temp = linea.split(',')
        tiempo.append(float(temp[0]))
        altura.append(float(temp[1].rstrip('\n')))
        


fig = plt.figure(figsize=(8,5))
plt.plot(tiempo, altura, c="r")
plt.grid()
plt.xlabel("Tiempo (s)")
plt.ylabel("Altura (m)")
plt.title("Movimiento del Proyectil")
plt.savefig("grafico.pdf")