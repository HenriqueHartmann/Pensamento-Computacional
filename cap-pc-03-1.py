ptempo = 5
reajuste = 1.01

empregados = {
    "pessoas": [
        {"nome": "kiko", "salario": 1700, "idade": 65, "sex": "m"},
        {"nome": "kiki", "salario": 1500, "idade": 57, "sex": "f"},
        {"nome": "kike", "salario": 2100, "idade": 21, "sex": "m"}
    ]
}

while ptempo > 0:
    for empregado in empregados['pessoas']:
        empregado['idade'] += 1
        empregado['salario'] = empregado['salario'] * reajuste
        ptempo = ptempo - 1

for empregado in empregados['pessoas']:
    aposentado = False
    apidade = 65
    temporestante = 0
    
    if empregado['sex'] == "f":
        apidade = 60
    
    temporestante = apidade - empregado['idade']
    
    if temporestante <= 0:
        aposentado = True
        temporestante = 0
        
    print("Nome: {} | Idade: {} | Aposentado: {} | Tempo: {} | Salario: {}".format(empregado["nome"], empregado["idade"], aposentado, temporestante, empregado['salario']))
