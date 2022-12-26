#include <stdio.h>
#include <math.h>

// Função
int calcRaizes(int a, int b, int c, float *pR1, float *pR2)
{
    // Variaveis da função
    float delta = b * b - 4 * a * c;

    // Condição A=0 e Delta=0 ---- Retorna Caso 0
    if (a == 0 || delta < 0)
    { // Se a for maior igual a 0 ou delta menor que 0, não retorne nada
        return 0;
    }
    // Condição se a de cima for negativo
    else
    {
        *pR1 = (-b + sqrt(delta)) / (2 * a); // pR1 possui o valor do resultado da conta
        *pR2 = (-b - sqrt(delta)) / (2 * a); // pR2 possui o valor do resultado da conta

        // Condição
        if (delta == 0)
        { // Se delta for 0, retorna 1
            return 1;
        }

        // Condição se a de cima for negativo
        else
        { // Se delta não for 0, retorna 2
            return 2;
        }
    }
}

int main()
{

    int a = 3;    // Variavel a com valor 3
    int b = 20;   // Variavel b com valor 20
    int c = 1;    // Variavel c com valor 1
    int ret;      // Variavel inteira ret (não sei oq significa)
    float r1, r2; // Float com duas raizes

    printf("Digite os coeficientes a,b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    ret = calcRaizes(a, b, c, &r1, &r2);
    switch (ret)
    {
    case 0:
        printf("\nNão dá");
        break;
    case 1:
        printf("\nRaiz1 = Raiz2 = %.1f", r1);
        break;
    case 2:
        printf("\nRaiz1 = %.1f Raiz2 = %.1f", r1, r2);
        break;
    }
    return 0;
}