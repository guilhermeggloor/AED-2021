// Determinar se um número é par ou ímpar.

#include <stdio.h>

int main() {

    int numero;

    printf("\nInforme um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("\nO numero e par! ");
    }else {
        printf("\nO numero e impar! ");
    }

 return 0;   
}