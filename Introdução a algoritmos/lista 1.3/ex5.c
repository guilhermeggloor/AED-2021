// O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos impostos 
// (45% do preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica). Faça um 
// algoritmo que leia o nome do automóvel e o preço de fábrica e imprima o nome do automóvel e o 
// preço final.

#include <stdio.h>
#include <stdlib.h>

int main() {

    
    char nome;
    float  preco, precoF, precoImp;

    printf("\nQual o nome do automovel? ");
    scanf("%s", &nome);
    printf("\nQual o preco de fabrica do automovel? ");
    scanf("%f", &preco);

    precoImp = preco * 0.45 + preco * 0.28;
    precoF = preco + precoImp;

    printf("\n----------------------------------");
    printf("\nNome do automovel: %c", nome);
    printf("\nPreco de fabrica: R$%.2f", precoF);
    printf("\n----------------------------------");

  return 0;  
}