// Dado uma quantidade de eleitores de um município, o número de votos brancos, nulos e 
// válidos, informar o percentual que cada um representa em relação ao total de eleitores. 

#include <stdio.h>

int main() {

  float x, brancos, nulos, validos, percent;

  printf("\nInforme o numero de eleitores: ");
  scanf("%d", &x);
  printf("\nInforme a quantidade de votos brancos: ");
  scanf("%d", &brancos);
  printf("\nInforme a quantidade de votos nulos: ");
  scanf("%d", &nulos);
  printf("\nInforme a quantidade de votos validos: ");
  scanf("%d", &validos);

  if ((brancos < 0) || (nulos < 0) || (validos < 0)) {
    printf("\nInvalido! ");
  }else {
    brancos = brancos / x;
    nulos = nulos / x;
    validos = validos / x;
    printf("\nRelacao entre votos brancos e eleitores: %.0f ", brancos * 100);
    printf("\nRelacao entre votos nulos e eleitores: %.0f ", nulos * 100);
    printf("\nRelacao entre votos validos e eleitores: %.0f ", validos * 100);
  }      





  return 0;  
}