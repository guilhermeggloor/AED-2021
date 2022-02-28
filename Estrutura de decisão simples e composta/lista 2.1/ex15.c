// Dado um número, informe se ele é divisível por 10, por 5, por 2, ou se não é divisível por 
// nenhum deles. 

#include <stdio.h>
#include <stdlib.h>

int main() {

  int numero;

  printf("\n---------------------------");
  printf("\nDigite um numero: ");
  scanf("%d", &numero);
  printf("\n---------------------------");

  if (numero % 10 == 0) {
    printf("\nO numero e divisivel por 10! ");
  }else {
    printf("\nO numero nao e divisivel por 10!");
  }

  if (numero % 5 == 0) {
    printf("\nO numero e divisivel por 5! ");
  }else {
    printf("\nO numero nao e divisivel por 5!");
  }

  if (numero % 2 == 0) {
    printf("\nO numero e divisivel por 2! ");
  }else {
    printf("\nO numero nao e divisivel por 2! ");
  }
  

  return 0;  
}
