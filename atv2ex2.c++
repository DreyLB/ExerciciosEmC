// Andrey César de Lucena de Barros
// Turma: Noite-A

#include <stdio.h>

void recomendacoes(float cr, int area, float *min, float *max)
{

    if (cr >= 9) // Nota maior que a 9
    {
        *min = 30;
        if (area == 1) // Tecnico Científico
        {
            *max = 40;
        }
        else if (area == 2) // Humanas
        {
            *max = 35;
        }
    }
    else if (cr >= 8) // Nota maior ou igual a 8
    {
        *min = 10;
        if (area == 1) // Tecnico Científico
        {
            *max = 15;
        }
        else if (area == 2) // Humanas
        {
            *max = 12;
        }
    }
    else if (cr >= 7) // Entre 7 e 8, valor único
    {
        *max = 5;
        *min = 5;
    }
    else // Menor que 7, valor único
    {
        *max = 0;
        *min = 0;
    }
}

void dec_Matricula(int matricula, int *pntr_area, int *pntr_cursarea, int *pntr_sequencial)
{
    // N D XXX

    *pntr_area = matricula / 10000;
    *pntr_cursarea = matricula / 1000 - (matricula / 10000) * 10;
    *pntr_sequencial = matricula - (matricula / 1000) * 1000;
}

float um_Aluno(int matricula, int num_Disciplinas, float cr)
{
    float per_min, per_max, per_bolsa;
    int area, curso_area, sequencial;

    dec_Matricula(matricula, &area, &curso_area, &sequencial);
    recomendacoes(cr, area, &per_min, &per_max);
    per_bolsa = per_min + (0.05 * num_Disciplinas);

    if (per_bolsa > per_max)
    {
        return per_max;
    }
    else
    {
        return per_bolsa;
    }
}

int main(void)
{
    float percentual_bolsa = 0, percentual_maximo, cr, aluno, percentual_medio;
    int matricula, num_disciplinas, qtd_aluno = 0, count_max;

    matricula = 1;
    while (matricula != 0)
    {

        printf("Matricula: ");
        scanf("%d", &matricula);
        if (matricula != 0)
        {
            printf("Disciplina: ");
            scanf("%d", &num_disciplinas);
            printf("Digite seu CR: ");
            scanf("%f", &cr);
            aluno = um_Aluno(matricula, num_disciplinas, cr);
            printf("Percentual recomendado de bolsa: %.2f\n\n", aluno);

            if (cr >= 7)
            {
                qtd_aluno++;
            }

            if (qtd_aluno == 0)
            {
                percentual_bolsa = 0;
                percentual_medio = 0;
            }
            else
            {
                percentual_bolsa = percentual_bolsa + aluno;
                percentual_medio = percentual_bolsa / qtd_aluno;
            }

            if (aluno > percentual_maximo)
            {
                percentual_maximo = aluno;
                count_max = 0;
            }

            if (percentual_maximo == aluno)
            {
                count_max++;
            }
        }
    }

    printf("\n\n%d alunos receberam a bolsa\n", qtd_aluno);
    printf("Percentual médio de bolsas: %.2f%%\n", percentual_medio);
    printf("Maior percentual fornecido: %.2f%%\n", percentual_maximo);
    printf("Quantidade do maior percentual: %d\n", count_max);

    return 0;
}
