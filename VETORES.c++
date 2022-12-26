// Sintaxe Vetores

// Declaração básica
// tipo nome[tamanho];

// Estrutura For
// for (i = 0; i < 10; i++)
//{
//    i é 0 e soma 1 a cada loop;
//}
#include <stdio.h>

void exibeGab(int *v, int n) // Criação da função que exibe o gabarito
{
    int i;                  // contador
    for (i = 0; i < n; i++) //
    {
        printf("\n Gabarito da questão %d: %d\n", i + 1, v[i]);
    }
}

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
    int gabarito[5], i; // Lista com gabarito de questões

    for (i = 0; i < 10; i++)
    {
        printf("Qual gabarito da questão %d? ", i + 1);
        scanf("%d", &gabarito[i]);
    }

    exibeGab(gabarito, 5);

    return 0;
}
