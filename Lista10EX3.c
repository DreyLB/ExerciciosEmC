#include <stdio.h>

void diaSeguinte(int dia, int mes, int ano)
{
    int dias[31] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
                    12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
                    23, 24, 25, 26, 27, 28, 29, 30, 31};
    int meses[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int mesAno, diaMes;
    for (mesAno = 0; mesAno < 12; mesAno++)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 ||
            mes == 12)
        {
            for (diaMes = 0; diaMes < 31; diaMes++)
            {
                if (dias[diaMes] == dia && meses[mesAno] == mes)
                {
                    diaMes++;
                    dia = dias[diaMes];
                    mes = meses[mesAno];
                }
                else if (dia == 31 && meses[mesAno] == mes)
                {
                    diaMes = 0;
                    mesAno++;
                    dia = dias[diaMes];
                    mes = meses[mesAno];
                }
                else if (dia == 31 && mes == 12)
                {
                    ano = ano + 1;
                    dia = 1;
                    mes = 1;
                }
            }
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            for (diaMes = 0; diaMes < 30; diaMes++)
            {
                if (dias[diaMes] == dia && meses[mesAno] == mes)
                {
                    diaMes++;
                    dia = dias[diaMes];
                    mes = meses[mesAno];
                }
                else if (dia == 30 && meses[mesAno] == mes)
                {
                    diaMes = 0;
                    mesAno++;
                    dia = dias[diaMes];
                    mes = meses[mesAno];
                }
            }
        }
        else
        {
            for (diaMes = 0; diaMes < 30; diaMes++)
            {
                if (dias[diaMes] == dia && meses[mesAno] == mes)
                {
                    diaMes++;
                    dia = dias[diaMes];
                    mes = meses[mesAno];
                }
                else if (dia == 29 && meses[mesAno] == mes)
                {
                    diaMes = 0;
                    mesAno++;
                    dia = dias[diaMes];
                    mes = meses[mesAno];
                }
            }
        }
    }
    printf("%d/%d/%d", dia, mes, ano);
}

int main()
{
    int dia, mes, ano;
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    diaSeguinte(dia, mes, ano);

    return 0;
}
