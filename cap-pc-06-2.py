def verifica(aluno):
    if aluno['nota'] >= 60:
        print("{} APROVADO: {}".format(aluno['matricula'], aluno['nota']))
    else:
        print("{} REPROVADO: {}".format(aluno['matricula'], aluno['nota']))

alunos = [
    {"matricula": 2019005195, "nota": 70},
    {"matricula": 2019005196, "nota": 59}
]

for aluno in alunos:
    verifica(aluno)
