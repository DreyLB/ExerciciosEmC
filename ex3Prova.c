#include <stdio.h>

void dizUnidade(int matricula[], int curso[], int codigo[], int unidade[])
{
    int c, i, j, unidade1 = 0, unidade2 = 0, unidade3 = 0, unidade4 = 0,
                 unidade5 = 0, unidade6 = 0, unidade7 = 0, unidade8 = 0;

    for (i = 0; i < 35; i++)
    {
        for (c = 0; c < 35; c++)
        {
            for (j = 0; i < 8; j++)
            {
                if (curso[c] == codigo[j] && matricula[c] > 0)
                {
                    printf("\nMatricula %d - Curso %d - Unidade %d", matricula[c],
                           curso[c], unidade[j]);
                    if (unidade[j] == 1)
                    {
                        unidade1++;
                    }
                    else if (unidade[j] == 2)
                    {
                        unidade2++;
                    }
                    else if (unidade[j] == 3)
                    {
                        unidade3++;
                    }
                    else if (unidade[j] == 4)
                    {
                        unidade4++;
                    }
                    else if (unidade[j] == 5)
                    {
                        unidade5++;
                    }
                    else if (unidade[j] == 6)
                    {
                        unidade6++;
                    }
                    else if (unidade[j] == 7)
                    {
                        unidade7++;
                    }
                    else if (unidade[j] == 8)
                    {
                        unidade8++;
                    }

                    break;
                }
            }
        }
    }
    printf("\n%d Alunos na unidade 1\n%d Alunos na unidade 2\n%d Alunos na unidade 3\n%d Alunos na unidade 4\n%d Alunos na unidade 5\n%d Alunos na unidade 6\n%d Alunos na unidade 7\n%d Alunos na unidade 8", unidade1, unidade2, unidade3, unidade4, unidade5, unidade6, unidade7, unidade8);
}

int main()
{
    int vCod[12] = {23, 12, 77, 45, 90, 78, 56, 43, 11, 912, 9, 22};
    int vUnid[12] = {1, 8, 6, 2, 3, 1, 4, 5, 6, 8, 7, 1};
    int vMatrAl[35] = {141, 79, 159, 110, 115, 138, 54, 200, 163, 77, 137, 105,
                       199, 124, 166, 127, 50, 135, 189, 159, 120, 64, 125, 139,
                       75, 178, 84, 176, 133, 116, 71, 182, 168, 129};
    int vCurso[35] = {23, 12, 77, 45, 90, 78, 56, 43, 11, 912, 9, 22,
                      23, 12, 77, 45, 90, 78, 56, 43, 11, 912, 9, 22,
                      912, 9, 22, 23, 12, 77, 45, 90, 78, 56, 43};

    dizUnidade(vMatrAl, vCurso, vCod, vUnid);

    return 0;
}
