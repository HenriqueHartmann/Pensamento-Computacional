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
        	printf("Valor %d: %f\n", ind, temp[ind]);
		}
        else
        {
        	printf("Indice invalido!!!!");
		}
    }
	
    return 0;
}
