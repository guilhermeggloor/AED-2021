//  Faça um algoritmo que receba a base e a altura de um triângulo, calcule e mostre a área do triângulo.

#include <stdio.h>

int main () {
    int baseT, alturaT, areaT;
    
    
    printf("\nBase do triangulo: ");
    scanf("%d", &baseT);
    printf("\nAltura do triangulo: ");
    scanf("%d", &alturaT);

    areaT = baseT * alturaT / 2;

    printf("\nArea do Triangulo: %d", areaT);


   return 0; 
}