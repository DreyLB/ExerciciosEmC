#include <stdio.h>

void vetor(int *v, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", v[i]);
    }
    printf("%d", v);
}

int main(void)
{
    int vetor[5], c = 0;

    for (c = 0; c < 5; c++)
    {
        printf("Digite o número no vetor: ");
        scanf("%d", vetor[c]);
    }

    return 0;
}

