// Faça um algoritmo que receba quatro notas de um aluno, calcule e mostre a média aritmética das 
// notas.
#include <stdio.h>

int main() {

    float nota1, nota2, nota3, nota4, mediaA;

    printf("\nNota do primeiro aluno: ");
    scanf("%f", &nota1);
    printf("\nNota do segundo aluno: ");
    scanf("%f", &nota2);
    printf("\nNota do terceiro aluno: ");
    scanf("%f", &nota3);
    printf("\nNota do quarto aluno: ");
    scanf("%f", &nota4);

    mediaA = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("\nMedia aritmetica dos alunos: %.2f", mediaA);


 return 0;   
}