n1 = float(input("Digite o primeiro valor: "))
n2 = float(input("Digite o segundo valor: "))

print("+ Soma\n- Subtração\n * Multiplicação\n / Divisão\n")
op = input("Escolha a operação: ")

if op == '+':
    print("Soma: {}". format((n1 + n2)))
elif op == '-':
    print("Subtração: {}". format((n1 - n2)))
elif op == '*':
    print("Multiplicação: {}". format((n1 * n2)))
elif op == '/':
    print("Divisão: {}". format((n1 / n2)))
else:
    print("Comando inválido")
