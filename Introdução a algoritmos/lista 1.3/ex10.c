// Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar 
// que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. 

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media;

    printf("\nPrimeira nota: ");
    scanf("%f", &nota1);
    printf("\nSegunda nota: ");
    scanf("%f", &nota2);
    printf("\nTerceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 * 2.0 + nota2 * 3.0 + nota3 * 5.0) / 10.0;

    printf("\n-----------------------");
    printf("\nMedia final: %.2f", media);
    printf("\n-----------------------");

  return 0;  
}