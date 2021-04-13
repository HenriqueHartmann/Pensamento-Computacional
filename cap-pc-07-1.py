def verifica(aluno):
    nota = aluno['nota']
    mat = aluno['matricula']

    if nota >=0 and nota <= 49:
        print("{} Insuficiente: {}".format(mat, nota))
    elif nota >= 50 and nota <= 69:
        print("{} Regular: {}".format(mat, nota))
    elif nota >= 70 and nota <= 89:
        print("{} Bom: {}".format(mat, nota))
    elif nota >= 90:
        print("{} Ótimo: {}".format(mat, nota))
    else:
        print("Nota inválida")

alunos = [
    {"matricula": 2019005195, "nota": 30},
    {"matricula": 2019005196, "nota": 59},
    {"matricula": 2019005196, "nota": 72},
    {"matricula": 2019005196, "nota": 95}
]

for aluno in alunos:
    verifica(aluno)
