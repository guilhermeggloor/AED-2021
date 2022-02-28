// Calcular a área de uma circunferência. Fórmula: Area = pi * RAIO2

#include <stdio.h>

int main() {

    int  raio;
    float pi = 3.14, area;

    printf("\nDigite o valor do raio: ");
    scanf("%d", &raio);

    area = pi * raio * raio;

    printf("\nValor da area da circunferencia: %.2f", area);

  return 0;  
}