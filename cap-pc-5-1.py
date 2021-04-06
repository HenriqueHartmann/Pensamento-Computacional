identificacao = input("Digite o id: ")
idade = input("Digite a idade: ")
renda = input("Digite a renda: ")

renda = round(float(renda), 2)

print("ID \t Idade \t Renda Familiar \n")
print("{} \t {} \t {}".format(identificacao, idade, renda))
