// Faça um algoritmo que receba 3 notas de um aluno e calcule a média final deste aluno. Considerar 
// que a média é ponderada e que os pesos das notas são: 2,3 e 5, respectivamente. 

#include <stdio.h>


int main () {

    float nota1, nota2, nota3, mediaF;

    printf("\nNota do primeiro aluno: ");
    scanf("%f", &nota1);
    printf("\nNota do segundo aluno: ");
    scanf("%f", &nota2);
    printf("\nNota do terceiro aluno: ");
    scanf("%f", &nota3);

    mediaF = (nota1 * 2.0 + nota2 * 3.0 + nota3 * 5.0) / 10;

    printf("\nMedia Final dos 3 alunos: %.2f", mediaF);

  return 0;  
}