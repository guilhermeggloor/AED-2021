// Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, 
// meses e dias. 

#include <stdio.h>

int main() {

  int idade, dias, anos, meses;

    printf("\nQual a sua idade expressa em dias? ");
    scanf("%d", &dias);

    anos = dias / 360;
    meses = dias / 30;

    printf("\n------------------------------");
    printf("\nIdade expressa em anos: %d", anos);
    printf("\nIdade expressa em meses: %d", meses);
    printf("\nIdade expressa em dias: %d", dias);
    printf("\n------------------------------");

  return 0;  
}