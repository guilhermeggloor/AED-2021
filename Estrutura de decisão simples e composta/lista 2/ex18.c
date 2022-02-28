// Encontrar o dobro de um número caso seja par e o seu triplo caso seja ímpar.

#include <stdio.h>

int main() {

    int a;

    printf("\nInforme o numero: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        a = a * 2;
        printf("\nO dobro do numero informado e: %d", a);
    }else {
        a = a * 3;
        printf("\nO triplo do numero informado e: %d", a);
    }

    


  return 0;  
}