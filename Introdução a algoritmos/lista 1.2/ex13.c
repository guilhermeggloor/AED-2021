// Faça um algoritmo que calcule e mostre a área de um círculo. Sabe-se que Área = π x R2
// .
#include <stdio.h>

int main() {

    float areaC, pi = 3.14;
    int R;
    

    printf("\nValor do Raio: ");
    scanf("%d", &R);

    areaC = pi * R * R;

    printf("\nArea do Circulo: %.2f", areaC);

  return 0;  
}