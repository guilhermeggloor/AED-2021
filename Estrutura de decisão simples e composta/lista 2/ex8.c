// Dadas três medidas, informar a maior.

#include <stdio.h>

int main() {

    int a, b, c;

    printf("Informe a medida A: ");
    scanf("%d", &a);
    printf("Informe a medida B: ");
    scanf("%d", &b);
    printf("Informe a medida C: ");
    scanf("%d", &c);

    if((a > b) && (a > c)) {
        printf("\n--------------------------------");
        printf("\nA e a maior medida");
        printf("\n--------------------------------");
    }else {
        if((b > a) && (b > c)) {
            printf("\n--------------------------------");
            printf("\nB e a maior medida");
            printf("\n--------------------------------");
    
        }else {
            if ((c > a) && (c > b)) {
                printf("\n--------------------------------");
                printf("\nC e a maior medida");
                printf("\n--------------------------------");
            }
        }
    }


  return 0;  
}