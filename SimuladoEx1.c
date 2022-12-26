#include <stdio.h>

void distribuicao(char times[])
{
    int i, c;

    for (i = 0; i < 4; i++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("%d - %d", times[i], times[c]);
        }
    }
}

int main(void)
{
    char vGrupo1[4][5] = {"kako", "kaka", "joka", "kiko"};
    distribuicao(vGrupo1);

    return 0;
}