vet = [None] * 10

for i, n in enumerate(vet):
    vet[i] = int(input("Digite um valor para o indice %d: "%(i)))
print("\n")

print("Multiplos de 2: ")
for i, n in enumerate(vet):
    if (n % 2) == 0:
        print(n)

print("\nMultiplos de 5: ")
for i, n in enumerate(vet):
    if (n % 5) == 0:
        print(n)
