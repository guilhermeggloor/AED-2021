// Ler dois valores maiores que zero para as variáveis A e B, efetuar a troca dos conteúdos de 
// forma que a variável A passe a ter o conteúdo da variável B e vice-versa. Utilize 1 variável 
// AUX para resolver.

#include <stdio.h>

int main() {

    int a, b, c, d;

    printf("\nInforme o valor de A: ");
    scanf("%d", &a);
    printf("\nINforme o valor de B: ");
    scanf("%d", &b);

    if ((a <= 0) && (b <= 0)) {
        printf("\nOs valores precisam ser maiores do que zero! ");
        printf("\nInforme o valor de A: ");
        scanf("%d", &a);
        printf("\nINforme o valor de B: ");
        scanf("%d", &b);
    }

    d = a;
    c = b;
    

    printf("\n------------------------------------------");
    printf("\nValor de A: %d", c);
    printf("\nValor de B: %d", d);
    printf("\n------------------------------------------");
    


  return 0;  
}