// Dadas quatro notas, informá-las em ordem crescente.

#include <stdio.h>

int main() {

    int nota1, nota2, nota3, nota4;

    printf("\nPrimeira nota: ");
    scanf("%d", &nota1);
    printf("\nSegunda nota: ");
    scanf("%d", &nota2);
    printf("\nTerceira nota: ");
    scanf("%d", &nota3);
    printf("\nQuarta nota: ");
    scanf("%d", &nota4);

    //deixei inacabo, mas é só repetir o msm processo 
    if ((nota1 > nota2) && (nota2 > nota3) && (nota3 > nota4)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota1,nota2,nota3,nota4);
    }else if ((nota1 > nota3) && (nota3 > nota2) && (nota2 > nota4)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota1,nota3,nota2,nota4);
    }else if ((nota1 > nota1) && (nota1 > nota3) && (nota3 > nota4)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota1,nota2,nota4,nota3);
    }else if ((nota2 > nota1) && (nota1 > nota3) && (nota3 > nota4)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota2,nota1,nota3,nota4);
    }else if ((nota2 > nota3) && (nota3 > nota1) && (nota1 > nota4)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota2,nota3,nota1,nota4);
    }else if ((nota2 > nota4) && (nota4 > nota3) && (nota3 > nota1)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota2,nota4,nota3,nota1);
    }else if ((nota3 > nota1) && (nota1 > nota2) && (nota2 > nota4)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota3,nota1,nota2,nota4);
    }else if ((nota3 > nota2) && (nota2 > nota1) && (nota1 > nota4)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota3,nota2,nota1,nota4);
    }else if ((nota3 > nota1) && (nota1 > nota2) && (nota2 > nota4)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota3,nota1,nota2,nota4);
    }else if ((nota3 > nota4) && (nota4 > nota1) && (nota1 > nota2)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota3,nota4,nota1,nota2);
    }else if ((nota3 > nota2) && (nota2 > nota4) && (nota4 > nota1)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota3,nota2,nota4,nota1);
    }else if ((nota3 > nota4) && (nota4 > nota1) && (nota1 > nota2)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota3,nota4,nota1,nota2);
    }else if ((nota3 > nota3) && (nota3 > nota2) && (nota2 > nota4)) {
        printf("\nValores em ordem crescente: %d -->  %d --> %d --> %d", nota3,nota1,nota2,nota4);
    }

  return 0;  
}