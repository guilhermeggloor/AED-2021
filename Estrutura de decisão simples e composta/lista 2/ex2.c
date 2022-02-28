// Dado um número verifique se ele está no intervalo de 100 a 1000.

#include <stdio.h>

int main() {

    int numero;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if ((numero >= 100) && (numero <= 1000)) {
        printf("\nO numero esta no intervalo de 100 a 1000");
    }else {
        printf("\nO numero nao esta no intervalo de 100 a 1000");
    }



  return 0;  
}