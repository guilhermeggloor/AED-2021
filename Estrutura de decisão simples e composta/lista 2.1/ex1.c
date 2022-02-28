// Dado um número, informar se ele é divisível por 3 e por 6

#include <stdio.h>

int main() {

  int numero;

  printf("\nInforme um numero: ");
  scanf("%d", &numero);

  if ((numero % 3 == 0) && (numero % 6 == 0)) {
    printf("\nO numero e divisivel por 3 e por 6! ");
  }else {
    printf("\nO numero nao e divisivel por 3 e por 6! ");
  }                


  return 0;  
}