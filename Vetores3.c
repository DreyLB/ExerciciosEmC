#include <stdio.h>
#define SIZE 5

int busca(char v[], int qt, char zona);
void zeraVetor(int v[], int qt);
void mostraTabFreq(char vZona[], int vQt[], int qt);
int main(void)
{
    char zona;
    int posZona, i, matricula;
    char vZona[SIZE] = {'N', 'L', 'O', 'C', 'S'};
    int vQt[SIZE]; //= {0,0,0,0,0};

    zeraVetor(vQt, SIZE);

    printf("Digite a sua matricula ou zero para finalizar:\n");
    scanf("%d", &matricula);

    while (matricula != 0)
    {

        printf("Digite a primeira letra da zona em maiúsculo (N,L,C,S,O):\n");
        scanf(" %c", &zona);

        posZona = busca(vZona, SIZE, zona);
        if (posZona != -1)
            vQt[posZona] += 1;
        else
            printf("\nzona não encontrada\n");

        printf("Digite a sua matricula ou zero para finalizar:\n");
        scanf("%d", &matricula);
    }

    mostraTabFreq(vZona, vQt, SIZE);
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
int busca(char v[], int qt, char zona)
{
    int i;
    for (i = 0; i < qt; i++)
    {
        if (v[i] == zona)
            return i;
    }
    return -1;
}

void mostraTabFreq(char vZona[], int vQt[], int qt)
{
    int i;
    printf("%-4s %4s\n", "Zona", "Qtd");
    for (i = 0; i < qt; i++)
    {
        printf("%-4c %4d\n", vZona[i], vQt[i]);
    }
}
