// Escreva um algoritmo que solicite ao usuário quatro notas e imprima a média entre elas. 

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);
    printf("\nDigite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("\nMedia das 4 notas: %.2f", media);

  return 0;  
}