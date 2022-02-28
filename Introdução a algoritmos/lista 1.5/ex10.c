// Dada a razão de uma PG e seu primeiro termo, calcular o 20º termo.

#include <stdio.h>
#include <math.h>

int main() {

   int an, q, a1, n;

    printf("\nInforme o primeiro termo da P.G: ");
    scanf("\n%d", &a1);
    printf("\nInforme a razao dessa P.G: ");
    scanf("\n%d", &q);
    printf("\nInforme o valor de n: ");
    scanf("%d", &n);

    an = a1 * pow(q, n-1);

    printf("\n-----------------");
    printf("\nValor de an: %d", an);
    printf("\n-----------------");

  return 0;  
}