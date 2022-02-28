// Em cada apartamento do edifício Mikonos só pode existir no máximo um animal de 
// estimação (um gato, um papagaio ou um cão). Neste edifício, cada apartamento paga 
// R$260,00 de condomínio mais uma taxa extra caso possua um animal de estimação. A 
// taxa é cobrada da seguinte forma: R$50,00 se tiver um cão, R$12,00 se tiver um papagaio 
// e R$30,00 se tiver um gato. Caso o apartamento não tenha nenhum animal de estimação 
// tem uma redução de R$20,00 no valor de seu condomínio. Considerando essas 
// informações, calcule e informe o valor a ser pago pelo dono do apartamento

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int escolha;

    
    printf("\n------------------------------------------------------");
    printf("\nTens animal de estimacao? ");
    printf("\n1 - Cachorro");
    printf("\n2 - Papagaio");
    printf("\n3 - gato");
    printf("\n4 - nenhum");
    printf("\nInforme a opcao: ");
    scanf("%d", &escolha);
    printf("\n-------------------------------------------------------");

    if ((escolha <= 0) || (escolha > 4)) {
        printf("\nInvalido! ");
    }else if (escolha == 1) {
        printf("\n-------------------------------------------------------");
        printf("\nTaxa: R$ 50,00");
        printf("\nPreco total: R$ 310,00");
        printf("\n-------------------------------------------------------");
    }else if (escolha == 2) {
        printf("\n-------------------------------------------------------");
        printf("\nTaxa: R$ 12,00");
        printf("\nPreco total: R$ 272,00");
        printf("\n-------------------------------------------------------");
    }else if (escolha == 3) {
        printf("\n-------------------------------------------------------");
        printf("\nTaxa: R$ 30,00");
        printf("\nPreco total: R$ 290,00");
        printf("\n-------------------------------------------------------");
    }else if (escolha == 4) {
        printf("\n-------------------------------------------------------");
        printf("\nDesconto de R$ 20,00");
        printf("\nPreco total: R$ 240,00");
        printf("\n-------------------------------------------------------");
    }

  return 0;  
}