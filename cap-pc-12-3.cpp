#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int i = 0;
    
    for (i; i < 10; i++)
    {
        printf("Digite um valor para o indice %d: ", i);
        scanf("%d", &vet[i]);
        printf("\n");
    }

    printf("\nMultiplos de 2: ");
    for (i = 0; i < 10; i++)
    {
        if ((vet[i] % 2) == 0)
        {
            printf("%d ", vet[i]);
        }
    }

    printf("\nMultiplos de 5: ");
    for (i = 0; i < 10; i++)
    {
        if ((vet[i] % 5) == 0)
        {
            printf("%d ", vet[i]);
        }
    }

    return 0;
}
