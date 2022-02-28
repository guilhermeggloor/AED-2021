// Conceito - Uma universidade atribui conceitos aos alunos com base na nota obtida em cada
// disciplina, segundo a tabela abaixo. Escreva um algoritmo que:
// a) lê a nota de 30 alunos;
// b) informe o conceito obtido;
// c) informe a distribuição do percentual em cada conceito (A,B,C,D,E) obtido em relação a todos os
// alunos.

// NOTA CONCEITO
// -------- ---------------
// 90..100 A
// 75..89 B
// 50..74 C
// 40..49 D
// 0..39 E

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int nota, alunos;
    srand(time(NULL));

    for (alunos = 0; alunos < 30; alunos++) {
        nota = rand() % 100;
        printf("\n Nota: %d", nota);

        if((nota >= 0) && (nota <= 39)) {
            printf("\tConceito E ");
        }else if((nota >= 40) && (nota <= 49)) {
            printf("\tConceito D ");
        }else if((nota >= 50) && (nota <= 74)) {
            printf("\tConceito C ");
        }else if((nota >= 75) && (nota <= 89)) {
            printf("\tConceito B ");
        }else if((nota >= 90) && (nota <= 100)) {
            printf("\tConceito A ");
        } 
    }

   
    return 0;
}