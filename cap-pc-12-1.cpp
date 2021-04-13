#include <stdio.h>
#include <stdlib.h>

int main()
{
    int va[5], vb[5], vres[5];

    for (int i = 0; i < 5; i++)
    {
        va[i] = rand() % 20;
        vb[i] = rand() % 20;
        vres[i] = va[i] + vb[i];
        printf("%d + %d = %d | ", va[i], vb[i], vres[i]);
    }

    return 0;
}
