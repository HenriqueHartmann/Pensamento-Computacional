alunos = [
    {"matricula": 2019005195, "nota": 30},
    {"matricula": 2019005196, "nota": 59},
    {"matricula": 2019005196, "nota": 72},
    {"matricula": 2019005196, "nota": 95}
]

for a in alunos:
    nota = a['nota']
    if nota >= 60:
        print("Mat: {} Nota: {} - Aprovado".format(a['matricula'], nota))
    else:
        print("Mat: {} Nota: {} - Reprovado".format(a['matricula'], nota))
