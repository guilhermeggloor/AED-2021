//Dado o raio de um círculo, calcule o perímetro e a área.

#include <stdio.h>

int main() {

    int raio, perimetro, area;
    float pi = 3.14;

    printf("\nInforme o valor do raio: ");
    scanf("%d", &raio);

    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    printf("\n-------------------------");
    printf("\nperimetro do circulo: %d", perimetro);
    printf("\narea do circulo: %d", area);
    printf("\n-------------------------");    


  return 0;  
}