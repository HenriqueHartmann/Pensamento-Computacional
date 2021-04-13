alunos = [
    {"matricula": 2019005195, "nota": 30, "faltas": 5},
    {"matricula": 2019005196, "nota": 59, "faltas": 11},
    {"matricula": 2019005197, "nota": 72, "faltas": 16},
    {"matricula": 2019005198, "nota": 20, "faltas": 2},
    {"matricula": 2019005199, "nota": 33, "faltas": 18},
    {"matricula": 2019005110, "nota": 45, "faltas": 25},
    {"matricula": 2019005111, "nota": 100, "faltas": 15},
    {"matricula": 2019005112, "nota": 85, "faltas": 16},
    {"matricula": 2019005113, "nota": 72, "faltas": 14},
    {"matricula": 2019005114, "nota": 95, "faltas": 0}
]

for a in alunos:
    nota = a['nota']
    faltas = a['faltas']
    if nota >= 60 and faltas < 16:
        print("Mat: {} Nota: {} Faltas: {} - Aprovado".format(a['matricula'], nota, faltas))
    else:
        print("Mat: {} Nota: {} Faltas: {} - Reprovado".format(a['matricula'], nota, faltas))
