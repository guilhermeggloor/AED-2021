// Faça um algoritmo que receba a base e a altura de um retângulo, calcule e mostre o perímetro e a 
// diagonal deste retângulo.

#include <stdio.h>
#include <math.h>

int main() {

    float baseR, alturaR, perimetroR, diagonalR; 

    printf("\nBase do Retangulo: ");
    scanf("%f", &baseR);
    printf("\nAltura do Retangulo: ");
    scanf("%f", &alturaR);

    perimetroR = 2 * (baseR + alturaR); 
    diagonalR = sqrt(baseR * baseR + alturaR * alturaR);  

    printf("\nPerimetro do Retangulo: %.2f", perimetroR);
    printf("\nDiagonal do Retangulo: %.2f", diagonalR);

  return 0;  
}