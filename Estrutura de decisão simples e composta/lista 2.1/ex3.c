// Um motorista deseja colocar no tanque de seu carro X reais de combustível. Seu carro é 
// flex e cada litro de gasolina custa R$ 2,87 e o álcool R$ 2,12. Informar se foi possível 
// encher o tanque de acordo com o valor gasto pelo motorista e qual combustível utilizado.

#include <stdio.h>

int main() {

    float x, litro;
    int i;

    printf("\nInforme o quanto voce ira gastar em reais: ");
    scanf("%f", &x);
    printf("\nDigite 1 para alcool ou 2 para gasolina: ");
    scanf("%d", &i);

    switch (i) {
        case 1: 
            printf("\nAlcool! ");
            litro = x / 2.12;
            printf("\nQuantidade de litros colocado: %.2f litros", litro);
            break;
        case 2: 
            printf("\nGasolina! ");
            litro = x / 2.87;
            printf("\nQuantidade de litros colocado: %.2f litros", litro);
            break;
        default: 
            printf("\nOpcao invalida! ");
            break;    
    }

  return 0;  
}