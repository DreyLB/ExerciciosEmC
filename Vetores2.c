#include <stdio.h>
#define SIZE 6

void zeraVetor(int v[], int qt);
void mostraTabFreq(int vQt[], int qt);

int main(void)
{
    int lado;
    int posLado, i;

    int vQt[SIZE]; //= {0,0,0,0,0};

    zeraVetor(vQt, SIZE);

    printf("Digite o lado ou zero para finalizar:\n");
    scanf("%d", &lado);

    while (lado != 0)
    {

        posLado = lado - 1;
        if (posLado >= 0 && posLado <= 5)
            vQt[posLado] += 1;
        else
            printf("\nlado não válido\n");

        printf("Digite o lado ou zero para finalizar:\n");
        scanf("%d", &lado);
    }

    mostraTabFreq(vQt, SIZE);
    return 0;
}

void zeraVetor(int v[], int qt)
{
    int i;
    for (i = 0; i < qt; i++)
    {
        v[i] = 0;
    }
}

void mostraTabFreq(int vQt[], int qt)
{
    int i;
    printf("%-4s %4s\n", "Lado", "Qtd");
    for (i = 0; i < qt; i++)
    {
        printf("%-4d %4d\n", i + 1, vQt[i]);
    }
}