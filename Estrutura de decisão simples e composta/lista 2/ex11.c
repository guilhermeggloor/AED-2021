// Determinar as raízes reais de uma equação do 2º grau (Ax2+Bx+C=0)

#include <stdio.h>
#include <math.h>

int main() {

    float A, B, C, delta, x1, x2;

    printf("\nInforme o Valor de A: ");
    scanf("%f", &A);
    printf("\nInforme o Valor de B: ");
    scanf("%f", &B);
    printf("\nInforme o Valor de C: ");
    scanf("%f", &C);

    if (A != 0) {
        delta = (B*B) - 4*A*C;
        if(delta == 0) {
            x1 = (-B + sqrt(delta)) / (2*A);
            printf("\n-------------------------");
            printf("\nDelta igual a zero! ");
            printf("\nx1 e x2: %.2f", x1);
            printf("\n-------------------------");
        }else {
            if (delta > 0) {
                x1 = (-B + sqrt(delta)) / (2*A);
                x2 = (-B - sqrt(delta)) / (2*A);
                printf("\n---------------------------------------------");
                printf("\nDelta maior que 0 ");
                printf("\nx1 = %.2f", x1);
                printf("\nx2 = %.2f", x2);
                printf("\n---------------------------------------------");
            }else {
                printf("\n---------------------------------------------");
                printf("\nDelta menor que 0 ");
                printf("Nao existe raiz real! ");
                printf("\n---------------------------------------------");
            }
        }
    }else {
        printf("\n---------------------------------------------");
        printf("\nNao e uma equacao do segundo grau! ");
        printf("\n---------------------------------------------");
    }
    

 return 0;   
}