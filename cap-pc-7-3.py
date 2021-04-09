idade = int(input("Digite a idade: "))

if idade >= 0 and idade < 12:
    print("Criança")
elif idade >= 12 and idade < 18:
    print("Adolescente")
elif idade >= 18 and idade < 30:
    print("Jovem")
elif idade >= 30 and idade < 65:
    print("Maduro")
elif idade >= 65:
    print("Idoso")
else:
    print("Idade inválida")
