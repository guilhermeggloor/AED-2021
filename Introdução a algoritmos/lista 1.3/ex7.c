// Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte 
// expressão:    D = R + S / 2  onde, R = (A + B)^2; S = (B + C)^2

#include <stdio.h>

int main() {

    int A, B, C, D, R, S;

    printf("\nA: ");
    scanf("%d", &A);
    printf("\nB: ");
    scanf("%d", &B);
    printf("\nC: ");
    scanf("%d", &C);

    R = (A + B) * (A + B) ;
    S = (B + C) * (B + C);
    D = R + S;

    printf("\nR : %d", R);
    printf("\nS : %d", S);
    printf("\nD : %d", D);


 return 0;   
}