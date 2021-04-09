#include <stdio.h>

void trocarVariavel(int *pa, int *pb);

int main()
{
	int numA, numB;
	
	printf("Digite um valor inteiro para numA: ");
	scanf("%d", &numA);
	
	printf("Digite um valor inteiro para numB: ");
	scanf("%d", &numB);
	
	if (numA < numB)
	{
		trocarVariavel(&numA, &numB);
	}
	
	printf("\nnumA: %d numB: %d\n", numA, numB);
	
	return 0;
}

void trocarVariavel(int *pa, int *pb)
{
	
	int aux;
	aux = *pa;
	*pa = *pb;
	*pb = aux;
}

