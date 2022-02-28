// Dada a base e a altura de um retângulo, calcule o perímetro, a área e a diagonal.

#include <stdio.h>
#include <math.h>

int main() {

    int base, altura, perimetro, diagonal, area;

    printf("\nBase do retangulo: ");
    scanf("%d", &base);
    printf("\nAltura do retangulo: ");
    scanf("%d", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;
    diagonal = sqrt(base* base + altura * altura);

    printf("\n---------------------------");
    printf("\nperimetro do retangulo: %d", perimetro);
    printf("\narea do retangulo: %d", area);
    printf("\ndiagonal do retangulo: %d", diagonal);
    printf("\n----------------------------");

 return 0;
}