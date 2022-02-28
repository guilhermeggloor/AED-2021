// Dada o lado de um quadrado, calcule o perímetro, a área e a diagonal.

#include <stdio.h>
#include <math.h>

int main() {
    int lado, perimetro, area, diagonal;

    printf("\nDigite o valor do lado do quadrado: ");
    scanf("%d", &lado);

    perimetro = lado * 4;
    area = lado * lado;
    diagonal = lado * sqrt(2);

    printf("\n-------------------------");
    printf("\nperimetro do quadrado: %d", perimetro);
    printf("\narea do quadrado: %d", area);
    printf("\ndiagonal do quadrado: %d", diagonal);
    printf("\n--------------------------");

   

  return 0;  
}