#include <stdio.h>

int main(void)
{
    int matFuncionario[5], ramal[5], i;
    printf("Digite a matrícula do funcionário: ");
    scanf("%d", &matFuncionario);

    for (i = 0; i < 5; i++)
    {
        printf("\n%d", matFuncionario[i]);
    }

    return 0;
}