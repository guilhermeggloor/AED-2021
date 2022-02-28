// Faça um algoritmo que receba um número positivo e maior que zero, calcule e mostre:
//  O número ao quadrado. 
//  O número ao cubo. 
//  A diferença do número com 5.

#include <stdio.h>

int main() {

    float numero, numeroQ, numeroC, numeroDF;


    printf("\nDigite um numero positivo e maior que zero: ");
    scanf("%f", &numero);

    if (numero <= 0) {
        printf("\nNumero invalido! precisa ser maior do que zero"); 
        printf("\nDigite um numero positivo e maior que zero: ");
        scanf("%f", &numero);   
     }


    numeroQ = numero * numero;
    numeroC = numero * numero * numero;
    numeroDF = numero + 5;

    printf("\nNumero ao quadrado: %.2f", numeroQ);
    printf("\nNumero ao Cubo: %.2f", numeroC);
    printf("\nNumero com 5: %.2f", numeroDF);
        


 return 0;   
}