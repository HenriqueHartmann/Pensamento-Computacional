n = int(input("Digite um número inteiro: "))
resto = n % 5
if resto != 0:
    print("{} Não é divisor de 5".format(n))
else:
    print("{} É divisor de 5".format(n))
