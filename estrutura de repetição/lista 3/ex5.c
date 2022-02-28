// 5. Determinar o percentual de aprovação e reprovação em um conjunto de 50 alunos, conhecidas as
// notas dos quatro bimestres, sendo a média de aprovação igual ou superior a 7,0.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int alunos;
    float nota1, nota2, nota3, nota4, media, percent, n;
    srand(time(NULL));
    

    for (alunos = 0; alunos < 50; alunos++) {
        nota1 = rand() % 10;
        nota2 = rand() % 10;
        nota3 = rand() % 10;
        nota4 = rand() % 10;
        media = (nota1 + nota2 + nota3 + nota4) / 4.0;
        n = 0;

        printf("\nnota1: %.1f", nota1);
        printf("\t---");
        printf("\tnota2: %.1f", nota2);
        printf("\t---");
        printf("\tnota3: %.1f", nota3);
        printf("\t---");
        printf("\tnota4: %.1f", nota4);
        printf("\t---");
        printf("\tMedia: %.1f", media);
        

        if ((nota1 >= 7.0) && (nota2 >= 7.0) && (nota3 >= 7.0) && (nota4 >= 7.0)) {
            n = n + 1;
            percent = n / 50;
        }

        if (media < 7.0) {
            printf("\tReprovado! ");
        }else {
            printf("\tAprovado! ");
        }


    }

    printf("\nPercentual de aprovacao: %.1f porcento", percent * 100);


    return 0;
}