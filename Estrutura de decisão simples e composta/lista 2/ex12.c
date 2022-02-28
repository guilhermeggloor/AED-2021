// Determinar, dentre quatro números, a soma dos pares.

#include <stdio.h>

int main() {

    int a, b, c, d, soma;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro numero: ");
    scanf("%d", &c);
    printf("\nDigite o quarto numero: ");
    scanf("%d", &d);

   if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0) && (d % 2 == 0)) {
       soma = a + b + c + d;
       printf("\n---------------------------------------------");
       printf("\nA soma dos quatro pares e de: %d", soma);
       printf("\n---------------------------------------------");
   }else {
    if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 != 0) && (d % 2 != 0)) {
        soma = a + b;
        printf("\n---------------------------------------------");
        printf("\nA soma dos pares A e B e de: %d", soma);
        printf("\n---------------------------------------------");
    }else {
        if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 == 0) && (d % 2 != 0)) {
            soma = a + c;
            printf("\n---------------------------------------------");
            printf("\nA soma dos pares A e C e de: %d", soma);
            printf("\n---------------------------------------------");
        }else {
            if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 == 0) && (d % 2 == 0)) {
                soma = a + d;
                printf("\n---------------------------------------------");
                printf("\nA soma dos pares A e D e de: %d", soma);
                printf("\n---------------------------------------------");
            }else {
                if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 == 0) && (d % 2 != 0)) {
                soma = b + c;
                printf("\n---------------------------------------------");
                printf("\nA soma dos pares B e C e de: %d", soma);
                printf("\n---------------------------------------------");   
             }else {
                 if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 != 0) && (d % 2 == 0)) {
                    soma = b + d;
                    printf("\nA soma dos pares B e D e de: %d", soma);
                 }else {
                    if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 == 0) && (d % 2 == 0)) {
                        soma = c + d;
                        printf("\n---------------------------------------------");
                        printf("\nA soma dos pares C e D e de: %d", soma);
                        printf("\n---------------------------------------------");
                    }else {
                        if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 == 0) && (d % 2 == 0)) {
                            soma = b + c + d;
                            printf("\n---------------------------------------------");
                            printf("\nA soma dos pares B,C e D e de: %d", soma);
                            printf("\n---------------------------------------------");
                        }else {
                         if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0) && (d % 2 != 0)) {
                            soma = a + b + c;
                            printf("\n---------------------------------------------");
                            printf("\nA soma dos pares A,B e C e de: %d", soma);
                            printf("\n---------------------------------------------");
                         }else {
                            if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 != 0) && (d % 2 == 0)) {
                                soma = a + b + d;
                                printf("\n---------------------------------------------");
                                printf("\nA soma dos pares A,B e D e de: %d", soma);
                                printf("\n---------------------------------------------");
                            }else {
                                if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 == 0) && (d % 2 == 0)) {
                                    soma = a + c + d;
                                    printf("\n---------------------------------------------");
                                    printf("\nA soma dos pares A,C e D e de: %d", soma);
                                    printf("\n---------------------------------------------");
                                }else {
                                    if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 != 0)) {
                                        printf("\n---------------------------------------------------------------");
                                        printf("\nTodos os numeros sao impares, digite numeros pares na proxima vez! ");
                                        printf("\n----------------------------------------------------------------");
                                    }
                                }
                            }
                         }
                        }
                    }
                
                 }
             }
            }
        }
    }
   }


 return 0;   
}