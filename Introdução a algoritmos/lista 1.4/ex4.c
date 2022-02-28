// Ler quatro números e apresentar o resultado dois a dois da adição e multiplicação, baseando-se na utilização da propriedade distributiva. Ou seja, se forem lidas as variáveis A, B, C e D, 
// deverão ser somadas e multiplicadas A com B, A com C, A com D. Depois B com C, B com D 
// e por fim C com D.

#include <stdio.h>

int main() {

    int A, B, C, D;

    printf("\nA: ");
    scanf("%d", &A);
    printf("\nB: ");
    scanf("%d", &B);
    printf("\nC: ");
    scanf("%d", &C);
    printf("\nD: ");
    scanf("%d", &D);

    printf("\n multiplicacao e soma de A com B: %d %d", A * B,A + B);
    printf("\n multiplicacao e soma de A com C: %d %d", A * C,A + C);
    printf("\n multiplicacao e soma de A com D: %d %d", A * D,A + D);
    printf("\n multiplicacao e soma de B com C: %d %d", B * C,B + C);
    printf("\n multiplicacao e soma de B com D: %d %d", B * D,B + D);
    printf("\n multiplicacao e soma de C com D: %d %d", C * D,C + D);


 return 0;
}