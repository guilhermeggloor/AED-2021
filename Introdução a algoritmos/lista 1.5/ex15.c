// Dado dois pontos quaisquer do plano, P(x1, y1) e Q(x2, y2), mostre a distância entre eles

#include <stdio.h>
#include <math.h>

int main() {

    int x1, y1, x2, y2, distancia;

    printf("\nx1: ");
    scanf("%d", &x1);
    printf("\nx2: ");
    scanf("%d", &x2);
    printf("\ny1: ");
    scanf("%d", &y1);
    printf("\ny2: ");
    scanf("%d", &y2);

    distancia = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

    printf("\n-----------------------------------------");
    printf("\nA distancia entre os dois pontos sera de: %d", distancia);    
    printf("\n-----------------------------------------");

   return 0; 
}