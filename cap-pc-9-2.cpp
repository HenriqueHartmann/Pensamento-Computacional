#include <stdio.h>

void calcula();

int main()
{
	calcula();
	
	return 0;
}

void calcula()
{
	int n;
	int div = 1;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	while (div <= n)
	{
		if ((n % div) == 0)
		{
			printf("%d\n", div);
		}
		div++;
	}
}

