// Escreva um algoritmo que obtenha seis notas de um aluno através do teclado, calculando a 
// média. Devem ser impressos a média calculada e uma mensagem indicando se o aluno foi 
// aprovado ou reprovado. Lembre-se que um aluno só é aprovado quando este obtém uma 
// média maior ou igual a 7.0

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, nota4, nota5, nota6, nota7, media;

    printf("\nPrimeira nota: ");
    scanf("%f", &nota1);
    printf("\nSegunda nota: ");
    scanf("%f", &nota2);
    printf("\nTerceira nota: ");
    scanf("%f", &nota3);
    printf("\nQuarta nota: ");
    scanf("%f", &nota4);
    printf("\nQuinta nota: ");
    scanf("%f", &nota5);
    printf("\nSexta nota: ");
    scanf("%f", &nota6);
    printf("\nSetima nota: ");
    scanf("%f", &nota7);

    media = nota1 + nota2 + nota3 + nota4 + nota5 + nota6 + nota7 / 7.0;

    if (media >= 7.0) {
        printf("\nAprovado! ");
    }else if (media < 7.0) {
        printf("\nReprovado! ");
    }else if (media < 0) {
        printf("\nInvalido! ");
    } 


}