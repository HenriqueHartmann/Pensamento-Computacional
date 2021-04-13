temp = [None] * 10
i = 0

while i < 10:
    temp[i] = float(input("%d - Digite um numero: "%(i)))
    i += 1

i = 0
while i >= 0 and i < 10:
    i = int(input("Digite um indice: "))
    if i >= 0 and i < 10:
        print("Valor %d: %f\n"%(i, temp[i]))
    else:
        print("Indice invalido")
