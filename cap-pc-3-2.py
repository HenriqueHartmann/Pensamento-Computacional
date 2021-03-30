clientes = {
    "pessoas": [
        {"nome": "kiko", "sex": "m"},
        {"nome": "kiki", "sex": "f"},
        {"nome": "kike", "sex": "m"},
        {"nome": "kiki", "sex": "f"},
        {"nome": "kiki", "sex": "f"},
        {"nome": "kiki", "sex": "f"}
    ]
}

count = {
    "qtd": 0,
    "f": 0,
    "m": 0
}

for cliente in clientes['pessoas']:
    count['qtd'] += 1
    if cliente['sex'] == 'm':
        count['m'] += 1
    else:
        count['f'] += 1

print("Total: {} | Homens: {} | Mulheres: {}".format(count['qtd'], count['m'], count['f']))
