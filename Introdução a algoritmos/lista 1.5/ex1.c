// Leia um número inteiro e escreva seu sucessor e antecessor.

#include <stdio.h>

int main() {

    int numero, sucessor, antecessor;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    if (numero < 0) {
        sucessor = numero - 1;
        antecessor = numero + 1;
    }    

    printf("\n----------------------");
    printf("\nSucessor: %d", sucessor);
    printf("\nAntecessor: %d", antecessor);
    printf("\n----------------------");

  return 0;  
}