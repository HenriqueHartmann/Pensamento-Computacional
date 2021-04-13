alunos = [
    {"matricula": 2019005195, "notas": [0, 100, 100 , 95, 95]},
    {"matricula": 2019005196, "notas": [60, 55, 14, 100, 65]},
    {"matricula": 2019005197, "notas": [60, 60 , 65, 60, 55]},
    {"matricula": 2019005198, "notas": [75, 80, 10, 100, 100]},
    {"matricula": 2019005199, "notas": [0, 0, 100, 100, 100]},
    {"matricula": 2019005110, "notas": [0, 0, 0, 0, 0]},
    {"matricula": 2019005111, "notas": [80, 55, 71, 65, 20]},
    {"matricula": 2019005112, "notas": [55, 45, 35, 100, 100]},
    {"matricula": 2019005113, "notas": [65, 32, 41, 55, 62]},
    {"matricula": 2019005114, "notas": [10, 10, 30, 100, 100]}
]

for a in alunos:
    soma = 0
    media = 0

    for n in a['notas']:
        soma += n

    if soma != 0:
        media = soma / len(a['notas'])

    if media >= 60:
        print("Mat: {} Media: {} - Aprovado".format(a['matricula'], media))
    else:
        print("Mat: {} Media: {} - Reprovado".format(a['matricula'], media))
