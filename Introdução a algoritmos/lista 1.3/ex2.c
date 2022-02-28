// Faça um algoritmo que receba um número inteiro e mostre seu sucessor e antecessor. 
#include <stdio.h>

int main() {

    int a, sucessor, antecessor;

    printf("\nDIgite um numero: ");
    scanf("%d", &a);

    sucessor = a + 1;
    antecessor = a - 1;

    if (a < 0 ) {
        sucessor = a - 1;
        antecessor = a + 1;
    }

    printf("\nSucessor: %d", sucessor);
    printf("\nAntecessor: %d", antecessor);


  return 0;  
}