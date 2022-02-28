// Determinar se um aluno está ou não aprovado, conhecidas as notas dos quatro bimestres,
// sendo a média de aprovação igual a 6,0

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, nota4, media;

    printf("\nNota do primeiro bimestre: ");
    scanf("%f", &nota1);
    printf("\nNota do segundo bimestre: ");
    scanf("%f", &nota2);
    printf("\nNota do terceiro bimestre: ");
    scanf("%f", &nota3);
    printf("\nNota do quarto bimestre: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    if (media < 6.0) {
        printf("\n--------------------------------");
        printf("\nReprovado! ");
        printf("\n--------------------------------");
    }else {
        printf("\n--------------------------------");
        printf("\nAprovado! ");
        printf("\n--------------------------------");
    }


  return 0;  
}