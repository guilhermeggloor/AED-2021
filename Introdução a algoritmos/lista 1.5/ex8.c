// Dados dois catetos de um triangulo retângulo, calcule a hipotenusa.

#include <stdio.h>
#include <math.h>

int main(void) {

    int a, b , c;

    printf("\nvalor do cateto a: ");
    scanf("%d", &a);
    printf("\nvalor do cateto b: ");
    scanf("%d", &b);

    c = sqrt(a*a + b*b);

    printf("\n---------------");
    printf("\nHipotenusa: %d", c);
    printf("\n---------------");


  return 0;  
}