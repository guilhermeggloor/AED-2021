// Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no 
// último ano. Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do 
// crédito de acordo com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o 
// valor do crédito.

#include <stdio.h>

int main() {

  float saldo, credito;

  printf("\nInforme o valor do saldo medio: ");
  scanf("%f", &saldo);

  if ((saldo >= 0) && (saldo <= 200)) {
    printf("\nSaldo medio: R$ %.2f", saldo);
    printf("\nNenhum credito! ");
  }else if ((saldo >= 201) & (saldo <= 400)) {
    credito = saldo * 0.20;
    printf("\nSaldo medio: R$ %.2f", saldo);
    printf("\nvalor do credito: R$ %.2f", credito);
  }else if ((saldo >= 401) && (saldo <= 600)) {
    credito = saldo * 0.30;
    printf("\nSaldo medio: R$ %.2f", saldo);
    printf("\nValor do credito: R$ %.2f", credito);
  }else if ((saldo >= 601)) {
    credito = saldo * 0.40;
    printf("\nSaldo medio: R$ %.2f", saldo);
    printf("\nValor do credito: R$ %.2f", credito);
  }


  return 0;  
}