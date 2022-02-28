// Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo 
// vendidas respectivamente por 15, 17 e 19 reais. Um usuário deseja gastar Y reais de 
// maneira que compre mais camisetas pequenas, poucas grandes e outras médias. Informar 
// quantas camisetas poderão ser compradas e seus tipos. 

#include <stdio.h>

int main() {

  float y, pequeno, medio, grande, quantidadeP, quantidadeM, quantidadeG, quantidadeC;

  printf("\nInforme quanto de dinheiro voce tem: ");
  scanf("%f", &y);

  pequeno = 15;
  medio = 17;
  grande = 19;

  quantidadeP = y / pequeno;
  quantidadeM = y / medio;
  quantidadeG = y / quantidadeG;
  quantidadeC = y / 3;

  
  printf("\nQuantidade de camisetas pequenas: %.0f", quantidadeP);
  printf("\nQuantidade de camisetas media: %.0f", quantidadeM);
  printf("\nQuantidade de camisetas grande: %.0f", quantidadeG);
  printf("\nQuantidade de camisetas que podem ser compradas: %.0f", quantidadeC);




  return 0;  
}