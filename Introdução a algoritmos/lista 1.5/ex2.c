// Leia dois números e escreva o dividendo, divisor, quociente e resto.

#include <stdio.h>

int main() {

    int a, b, dividendo, divisor, quociente, resto;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &b);

    dividendo = a;
    divisor = b;

    quociente = a / b;
    resto = a % b;

    printf("\n-------------------------");
    printf("\ndividendo: %d", dividendo);
    printf("\ndivisor: %d", divisor);
    printf("\nquociente: %d", quociente);
    printf("\nresto: %d", resto);
    printf("\n-------------------------");

  return 0;  
}