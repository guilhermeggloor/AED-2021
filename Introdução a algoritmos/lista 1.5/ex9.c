// Dada a razão de uma PA e seu primeiro termo, calcular o 20º termo.

#include <stdio.h>

int main() {

    int a1, an, n, Sn, r;

    printf("\nInforme o primeiro termo da P.A: ");
    scanf("%d", &a1);
    printf("\nInforme a razao dessa P.A: ");
    scanf("%d", &r);

    n = 20;
    an = a1 + (n-1) * r;

    printf("\n-------------------------");
    printf("\no termo 20 dessa P.A e: %d", an);
    printf("\n--------------------------");

  return 0;  
}