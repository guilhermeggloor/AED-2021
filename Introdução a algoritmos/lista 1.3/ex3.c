// Escreva um algoritmo que solicite ao usuário a altura e o raio de um cilindro circular e imprima o volume 
// do mesmo, segundo a fórmula: Volume = pi * raio² * altura, onde pi = 3.14

#include <stdio.h>


int main() {

    float altura, raio, volume, pi;

    printf("\nInsira o valor da altura do cilindro: ");
    scanf("%f", &altura);
    printf("\nInsira o valor do raio do cilindro: ");
    scanf("%f", &raio);

    pi = 3.14;
    volume = pi * raio * raio * altura;

    printf("Volume do cilindro: %.2f", volume);

  return 0;  
}