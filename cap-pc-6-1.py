def verifica(a, b, c):
    print(a > b)
    print(a <= c)
    print(a == b and a > c)
    print(a <= b or a >= c)

c = int(input("Digite 1 para inserir valores personalizados: \n"))

if c == 1:
    a = int(input("Digite um numero inteiro: "))
    b = int(input("Digite um numero inteiro: "))
    c = int(input("Digite um numero inteiro: "))
    verifica(a, b, c)
else:
    print("\n Testes:")
    print("\n Primeira True")
    verifica(3, 2, 1)

    print("\n Segundo True")
    verifica(1, 2, 3)

    print("\n Terceiro True")
    verifica(2, 2, 1)

    print("\n Quarto True")
    verifica(1, 2, 1)
