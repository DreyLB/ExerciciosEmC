#include <stdio.h>
// AA S XXXX C L
// 20 1 1999 2 1

// AA= ano 
// S = semestre 
// XXXX = disciplina 
// C = dígito (1 - Manhã  e 2-Noite) 
// L= dígito identificador da turma (1- Turma A  , 2 =Turma B, 3-Turma C)

// 12 3 4567 8 9 
void separador(int codigo){
    int aa, s, xxxx, c, l, *ponteiro;
    int cortar_s, corta_xxxx, cortar_c;
    
    aa = codigo/10000000;
    s = codigo/1000000 - (aa*10);
    cortar_s = codigo/1000000;
    xxxx = codigo/100 - (cortar_s * 10000);
    corta_xxxx = codigo/100;
    c = codigo/10 - (corta_xxxx*10);
    cortar_c = codigo/10;
    l = codigo - (cortar_c*10);

    printf("Ano %d \nSemestre: %d \nDisciplina: %d \nTurno: %d \nTurma: %d", aa, s, xxxx, c, l);

}

int main(void){
    int codigo;
    
    
    
    //separador(123456789);

    return 0;
}