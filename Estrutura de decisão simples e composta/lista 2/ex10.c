// Tendo como dados de entrada a altura e o sexo de uma pessoa, calcular seu peso ideal, 
// utilizando as seguintes fórmulas:
// - para homens: (72,7 * H) - 58 ;
// - para mulheres: (62,1 * H) - 44,7.

#include <stdio.h>

int main() {

    float altura, peso;
    char sexo;

    printf("\nInforme a sua sexualidade (H = homem, M = Mulher): ");
    scanf("%c", &sexo);
    printf("\nInforme a sua altura: ");
    scanf("%f", &altura);

    if ((sexo == 'H') || (sexo == 'h')) {
        peso = (72.7 * altura) - 58;
        printf("\nO peso ideal para homens e de: %.2f kg", peso);
    }else {
        if ((sexo == 'M') || (sexo == 'm')) {
            peso = (62.1 * altura) - 44.7;
            printf("\nO peso ideal para mulheres e de: %.2f kg", peso);
        }else {
            printf("\nDesculpe, mas so podera digitar apenas M ou H! ");
        }
    }




 return 0;   
}