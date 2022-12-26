#include <stdio.h>

void um_departamento(int qtd_funcionarios, int *func_5k_ate_5_dependente, int *func_5k_mais_5_dependente)
{
    int matricula, dependente, cont = 0, cont_ate_5_dependente = 0, cont_mais_de_5_dependente = 0;
    float salario;

    while (qtd_funcionarios > cont)
    {
        printf("Matricula funcionário: ");
        scanf("%d", &matricula);
        printf("Quantidade de dependentes: ");
        scanf("%d", &dependente);
        printf("Salário: R$");
        scanf("%f", &salario);

        cont++;

        if (salario > 5000 && dependente <= 5)
        {
            cont_ate_5_dependente++;
        }
        else if (salario > 5000 && dependente >= 5)
        {
            cont_mais_de_5_dependente++;
        }
    }
    *func_5k_ate_5_dependente = cont_ate_5_dependente;
    *func_5k_mais_5_dependente = cont_mais_de_5_dependente;
}

int main(void)
{
    int qtd_funcionario, func_ate_5_depend, func_mais_5_depend, departamento = 1;

    while (departamento != 0)
    {
        printf("Código de departamento: ");
        scanf("%d", departamento);

        if (departamento != 0)
        {
            printf("Quantidade de funcionários: ");
            scanf("%d", qtd_funcionario);
            um_departamento(qtd_funcionario, &func_ate_5_depend, &func_mais_5_depend);
        }
    }

    return 0;
}


