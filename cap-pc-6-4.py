n1 = int(input("Digite o primeiro valor inteiro: "))
n2 = int(input("Digite o segundo valor inteiro: "))
n3 = int(input("Digite o terceiro valor inteiro: "))

if n1 < n2 and n1 < n3:
    print("%s é o menor" % n1)
elif n2 < n1 and n2 < n3:
    print("%s é o menor" % n2)
else:
    print("%s é o menor" % n3)
