#include <stdio.h>

// ano S XXXX C L
// 20 1 1999 2 1

// ano= ano
// S = semestre
// XXXX = disciplina
// C = dígito (1 - Manhã  e 2-Noite)
// L= dígito identificador da turma (1- Turma A  , 2 =Turma B, 3-Turma C)

// 12 3 4567 8 9

void separador(int codigo)
{
    int ano, semestre, disciplina, turno, id_turma, *pntr_ano, *pntr_semestre, *pntr_disciplina, *pntr_turno, *pntr_id_turma;
    int cortar_s, corta_disciplina, cortar_c;

    pntr_ano = &ano;
    *pntr_ano = codigo / 10000000;

    pntr_semestre = &semestre;
    *pntr_semestre = codigo / 1000000 - (ano * 10);

    cortar_s = codigo / 1000000;

    pntr_disciplina = &disciplina;
    *pntr_disciplina = codigo / 100 - (cortar_s * 10000);

    corta_disciplina = codigo / 100;

    pntr_turno = &turno;
    *pntr_turno = codigo / 10 - (corta_disciplina * 10);

    cortar_c = codigo / 10;

    pntr_id_turma = &id_turma;
    *pntr_id_turma = codigo - (cortar_c * 10);

    printf("\nAno %d \nSemestre: %d \nDisciplina: %d \nTurno: %d \nTurma: %d", ano, semestre, disciplina, turno, id_turma);
}

int main(void)
{
    int codigo;
    printf("Digite seu código de turma: ");
    scanf("%d", &codigo);
    separador(codigo);

    return 0;
}
