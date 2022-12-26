#include <stdio.h>

int busca(int v[], int qt, int valor)
{
    int i;
    for (i = 0; i < qt; i++)
    {
        if (v[i] == valor)
        {
            return i;
        }
    }

    return -1;
}

int main(void)
{
    int N, i;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);
    double vet[N];
    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("%lf", vet);

    return 0;
}
