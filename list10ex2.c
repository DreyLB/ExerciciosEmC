#include <stdio.h>

void tradutor(int vnum[])
{
    char letras[27] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
                       'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
                       'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("%c", letras[vnum[i]]);
    }
}

int main(void)
{
    int i;

    int lSecreta[7] = {2, 15, 13, 0, 4, 9, 1};

    tradutor(lSecreta);

    return 0;
}
