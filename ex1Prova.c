#include <stdio.h>
#include <string.h>

void cobrar(char modelo[], char vinculo[], int entradaHora, int entradaMin,
            int saidaHora, int saidaMin, int *horaDur, int *minDur, float *totalPag)
{
    float valor;

    if (strcmp(vinculo, "Aluno") == 0)
    {
        valor = 10.00;
    }
    else if (strcmp(modelo, "1A") == 0 && strcmp(vinculo, "Aluno") != 0)
    {

        valor = 12.00;
    }
    else if (strcmp(modelo, "2A") == 0 && strcmp(vinculo, "Aluno") != 0)
    {

        valor = 15.00;
    }
    else
    {
        if (strcmp(vinculo, "Funcionario") == 0 ||
            strcmp(vinculo, "Professor") == 0)
        {
            valor = 25.00;
        }
        else if (strcmp(vinculo, "Visitante") == 0)
        {
            valor = 40.00;
        }
    }

    *horaDur = saidaHora - entradaHora;
    if (entradaMin > saidaMin)
    {
        *minDur = entradaMin - saidaMin;
    }
    else
    {
        *minDur = saidaMin - entradaMin;
    }

    *totalPag = valor * *horaDur;

    printf("\nModelo: %s Vinculo: %s Entrada: %d:%d Saida %d:%d Duração %d:%d Valor: "
           "%.2f",
           modelo, vinculo, entradaHora, entradaMin, saidaHora, saidaMin, *horaDur, *minDur, *totalPag);
}

int main()
{
    int horaDuracao, minutoDuracao;
    float total;
    cobrar("3C", "Aluno", 10, 20, 12, 40, &horaDuracao, &minutoDuracao, &total);
    cobrar("2B", "Professor", 10, 20, 12, 20, &horaDuracao, &minutoDuracao, &total);
    cobrar("3B", "Visitante", 10, 20, 12, 20, &horaDuracao, &minutoDuracao, &total);

    return 0;
}
