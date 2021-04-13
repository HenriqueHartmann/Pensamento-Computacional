temp = [None] * 10

for i, n in enumerate(temp):
    temp[i] = float(input("%d - Digite um numero: "%(i)))

i = 0
while i >= 0 and i < 10:
    i = int(input("Digite um indice: "))
    if i >= 0 and i < 10:
        temp[i] = float(input("Digite um valor para substituir o valor do indice inserido: "))
        print(temp)
    else:
        print("Indice invalido")
