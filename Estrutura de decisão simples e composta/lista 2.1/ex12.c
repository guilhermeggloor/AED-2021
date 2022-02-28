// Uma pessoa, ao realizar uma compra em um supermercado, recebe um número da sorte 
// para concorrer a um prêmio no final do mês. O cálculo do número da sorte é feito da 
// seguinte forma: 
// i. Caso a compra seja inferior a R$500,00 o número da sorte = 5000 - Valor a compra * 
// Idade 
// ii. Caso a compra seja superior a R$500,00 o número da sorte = 50000 - Valor a 
// compra * Idade 
// iii. Caso a compra seja igual a R$500,00 o número da sorte = Idade * Idade 
// Informar o número da sorte do comprador, fornecidos o valor da compra e o ano de 
// nascimento.

#include <stdio.h>

int main() {

    int idade, nsorte, compra;

    printf("\nInforme a idade: ");
    scanf("%d", &idade);
    printf("\nCotacao total da compra: ");
    scanf("%d", &compra);

    if (compra < 500) {
        nsorte = 5000 - compra * idade;
        printf("\nNumero da sorte: %d", nsorte);
    }else if (compra > 500) {
        nsorte = 5000 - compra * idade;    
        printf("\nNumero da sorte: %d", nsorte);
    }else if (compra = 500) {
        nsorte = idade * idade;
        printf("\nNumero da sorte: %d", nsorte);
    }


  return  0;  
}