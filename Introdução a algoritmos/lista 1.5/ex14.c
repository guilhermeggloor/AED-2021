// Calcule as raízes de uma equação do 2º grau (Ax2
// + Bx + C), considerando que a equação 
// tem duas raízes reais.

#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, x1, x2, delta;

    printf("\nValor de A: ");
    scanf("%f", &a);
    printf("\nValor de B: ");
    scanf("%f", &b);
    printf("\nValor de C: ");
    scanf("%f", &c);

    if (a != 0) {
        delta = (b*b) - 4*a*c;
        if (delta == 0) {
            x1 = (-b + sqrt(delta)) / (2*a);
            printf("\n---------------------------------------------");
            printf("\nDelta igual a 0");
            printf("\nx1 e x2 = %.2f", x1);
            printf("\n---------------------------------------------");
        }else 
        {
            if (delta > 0) 
              {
                x1 = (-b + sqrt(delta)) / (2*a);
                x2 = (-b - sqrt(delta)) / (2*a);
                printf("\n---------------------------------------------");
                printf("\nDelta maior que 0 ");
                printf("\nx1 = %.2f", x1);
                printf("\nx2 = %.2f", x2);
                printf("\n---------------------------------------------");
              }else 
              {
                printf("\n---------------------------------------------");
                printf("\nDelta menor que 0 ");
                printf("Nao existe raiz real! ");
                printf("\n---------------------------------------------");
              }
        }
    }else 
    {
        printf("\n---------------------------------------------");
        printf("\nNao e uma equacao do segundo grau! ");
        printf("\n---------------------------------------------");
    }

   

  return 0;  
}