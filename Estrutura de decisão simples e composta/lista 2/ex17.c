// Sendo conhecidos os valores de z e w, calcular y:
//  7 . x . 2 - 3 . x – 8 . t
//  y = -------------------------------
//  5 . ( x + 1 )
// sabendo-se que os valores de x e t são assim definidos:
// se w>0 ou z<7: x=(5w+1)/3
// t=5z+2
// caso contrário: x=5z+2
// t=(5w+1)/3
// Onde o . (ponto) é multiplicação

#include <stdio.h>

int main() {

    int z, w, x, y, t;

    printf("\nInsira o valor de z: ");
    scanf("%d", &z);
    printf("\nInsira o valor de w: ");
    scanf("%d", &w);

    if ((w > 0) || (z < 7)) {
        x = (5 * w + 1) / 3;
        t = 5 * z + 2;
    }else {
        x = 5 * z + 2;
        t = (5 * w + 1) / 3;
    }

    y = 7 * x * 2 - 3 * x - 8 * t / 5 * (x + 1);

    printf("\n------------------------------------");
    printf("\nValor de y: %d", y);
    printf("\n------------------------------------");


  return 0;  
}