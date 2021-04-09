#include <stdio.h>
#include <stdlib.h>

struct aluno {
	float n1, n2;
};
typedef struct aluno Aluno;
Aluno al[10];

void calculaMedia(Aluno *a);
void criaAlunos();
void imprimirAlunos();

int main()
{
	criaAlunos();
	imprimirAlunos();
	
	return 0;
}

void calculaMedia(Aluno *a)
{
	float media = (a->n1 + a->n2) / 2;
	printf("\t MEDIA: %f", media);
}

void criaAlunos()
{
	int qtd = 0;
	while (qtd < 10)
	{
		float n1, n2;
		printf("ALUNO: %d \n", qtd + 1);
		printf("Digite a primeira nota do aluno: ");
		scanf("%f", &al[qtd].n1);
		
		printf("Digite a segunda nota do aluno: ");
		scanf("%f", &al[qtd].n2);
		
		printf("\n");
		qtd++;	
	}
}

void imprimirAlunos()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		Aluno* a = &al[i];
		printf("\nALUNO: %d", i + 1);
		calculaMedia(a);
	}
}

