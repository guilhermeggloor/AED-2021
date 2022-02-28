// Calcular a área de uma circunferência e mostrá-la. Fórmula: Area =  * RAIO2
// . O valor do 
// raio não poderá ser negativo ou zero.

#include <stdio.h>

int main() {

    int area, raio;
    float pi = 3.14;

    printf("\ninforme o valor do raio: ");
    scanf("%d", &raio);

    if (raio <= 0) {
        printf("\nO valor do raio tem que ser maior do que zero! ");
        printf("\ninforme o valor do raio: ");
        scanf("%d", &raio);
    }

    area = pi * raio * raio;

    printf("\nArea de circunferencia: %d", area);
    


  return 0;  
}