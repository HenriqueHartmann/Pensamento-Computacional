def ler():
    return int(input("Digite um número: "))

def status(n):
    if n >=1 and n <= 5:
        return True
    else:
        return False


nstatus = False
serie = []

while nstatus == False:
    n = ler()
    serie.append(n)
    nstatus = status(n)

soma = 0
for s in serie:
    soma += s
media = soma / len(serie)
print(serie)
print("Soma: {} | Media: {}".format(soma, media))
