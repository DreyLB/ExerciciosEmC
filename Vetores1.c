#include <stdio.h>
#define TAM 5

void exibeGab(int *v, int n)
{
    int i;
    printf("\n====================");
    printf("\nG A B A R I T O");
    for (i = 0; i < n; i++)
    {
        printf("\n Gabarito da Questão %d: %d", i + 1, v[i]);
    }
    printf("\n====================\n");
    return;
}
void preencheVetor(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Digite a resposta da Questão %d:", i + 1);
        scanf("%d", &v[i]);
    }
}

int main()
{
    int vGab[TAM];
    int i;
    int vResp[TAM];
    int nota;
    int matr;
    // Preencha o gabarito com as respostas do professor
    // preencher via scanf

    printf("\n==>Gabarito:\n");
    preencheVetor(vGab, TAM);

    exibeGab(vGab, TAM);
    // corrigir a prova de dos alunos
    // obter as respostas do aluno
    printf("\nDigite a matr do aluno ou 0 para finalizar: ");
    scanf("%d", &matr);
    while (matr != 0)
    {
        printf("\n==>Respostas do aluno %d\n", matr);
        preencheVetor(vResp, TAM);
        // comparar as respostas com o gabarito--> nota
        nota = 0;
        for (i = 0; i < TAM; i++)
        {
            if (vGab[i] == vResp[i])
            {
                nota += 2;
            }
        }
        // exibir a nota
        printf("\nMatr: %d Nota: %d", matr, nota);
        printf("\nDigite a matr do aluno ou 0 para finalizar: ");
        scanf("%d", &matr);
    }

    return 0;
}