#include <stdio.h>

int fat(int n);

int main()
{
	int n;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);
	
	printf("Fat de %d = %d", n, fat(n));
	
	return 0;
}

int fat(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n*(fat(n-1));
	}
}

