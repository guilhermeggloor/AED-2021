// Dados os três lados de um paralelepípedo, calcule o perímetro, a área, o volume e a 
// diagonal.

#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c, perimetro, area, volume, diagonal;
    float pi = 3.14;

    printf("\nDigite o valor do primeitro lado: ");
    scanf("%d", &a);
    printf("\nDigite o valor do segundo lado: ");
    scanf("%d", &b);
    printf("\nDigite o valor do terceiro lado: ");
    scanf("%d", &c);

    area = (2*a*b + 2*b*c + 2*a*c);
    volume = a * b * c;
    diagonal = sqrt(a*2 + b*2 + c);
    perimetro = pi * diagonal;

    printf("\n------------------------------------");
    printf("\nperimetro do paralelepido: %d", perimetro);
    printf("\narea do paralelepipedo: %d", area);
    printf("\nvolume do paralelepipedo: %d", volume);
    printf("\ndiagonal do paralelepipedo: %d", diagonal);
    printf("\n-------------------------------------");

  return 0;  
}