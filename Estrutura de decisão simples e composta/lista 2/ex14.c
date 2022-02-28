// Colocar três valores em ordem crescente.

#include <stdio.h>

int main() {

    int a, b, c;

    printf("\nDigite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &c);

    if ((a > b) && (a > c) && (b > c)) {
        printf("\nValores em ordem crescente: %d %d %d", a, b, c);
    }else {
        if ((b > a) && (b > c) && (c > a)) {
            printf("\nValores em ordem crescente: %d %d %d", b, c, a);
        }else {
            if ((c > a) && (c > b) && (a > b)) {
                printf("\nValores em ordem crescente: %d %d %d", c, a, b);
            }else {
                if ((c > a) && (c > b) && (b > a)) {
                    printf("\nValores em ordem crescente: %d %d %d", c, b, a);
                }else {
                    if ((b > a) && (b > c) && (a > c)) {
                        printf("\nValores em ordem crescente: %d %d %d", b, a, c);
                    }
                }
            }
        }
    }



  return 0;  
}