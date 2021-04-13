#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp[10];
    int i = 0;
    
    while (i < 10)
    {
        printf("%d - Digite um numero: ", i);
        scanf("%f", &temp[i]);
        i++;
    }

    int ind = 0;
	
    while (ind >= 0 && ind < 10)
    {
        printf("Digite um indice: ");
        scanf("%d", &ind);
        if (ind >= 0 && ind < 10)
        {
            printf("Digite um valor para substituir o valor do indice inserido: ");
            scanf("%f", &temp[ind]);
    	    for (i = 0; i < 10; i++)
            {
                printf("%f ", temp[i]);
            }
            printf("\n");
		}
        else
        {
        	printf("Indice invalido!!!!");
		}
    }
	
    return 0;
}
