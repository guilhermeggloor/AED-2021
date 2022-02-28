// O cardápio de uma lancheria é o seguinte:
// Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a 
// ser pago por aquele lanche e mostre o nome do lanche e o valor a ser pago. Considere 
// que a cada execução somente será calculado um item.

#include <stdio.h>

int main() {

    float codigo, quantidade;
    float preco, valor;

    printf("\nInsira o codigo do lanche: ");
    scanf("%f", &codigo);
    printf("\nInforma a quantidade: ");
    scanf("%f", &quantidade);

    if (codigo == 100) {
        preco = 1.20;
        valor = quantidade * preco;
        printf("\nCachorro quente: ");
        printf("\nQuantidade: %.1f", quantidade);
        printf("\nPreco total a ser pago: R$ %.2f", valor);

    }else {
        if (codigo == 101) {
            preco = 1.30;
            valor = quantidade * preco;
            printf("\nBauru simples: ");
            printf("\nQuantidade: %.1f", quantidade);
            printf("\nPreco total a ser pago: R$ %.2f", valor);
        }else {
            if (codigo == 102) {
                preco = 1.50;
                valor = quantidade * preco;
                printf("\nBauru com ovo: ");
                printf("\nQuantidade: %.1f", quantidade);
                printf("\nPreco total a ser pago: R$ %.2f", valor);
            }else {
                if (codigo == 103) {
                    preco = 1.20;
                    valor = quantidade * preco;
                    printf("\nHamburguer: ");
                    printf("\nQuantidade: %.1f", quantidade);
                    printf("\nPreco total a ser pago: R$ %.2f", valor);
                }else {
                    if (codigo == 104) {
                        preco = 1.30;
                        valor = quantidade * preco;
                        printf("\nCheeseburguer: ");
                        printf("\nQuantidade: %.1f", quantidade);
                        printf("\nPreco total a ser pago: R$ %.2f", valor);
                    }else {
                        if (codigo == 105) {
                            preco = 1.00;
                            valor = quantidade * preco;
                            printf("\nRefrigerante: ");
                            printf("\nQuantidade: %.1f", quantidade);
                            printf("\nPreco total a ser pago: R$ %.2f", valor);
                        }
                    }
                }
            }
        }
    }



  return 0;  
}
