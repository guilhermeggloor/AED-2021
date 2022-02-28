// Dadas 3 pontuações de finalistas em um campeonato, informe qual a pontuação que ficou 
// em primeiro, segundo e terceiro lugar. 

#include <stdio.h>

int main() {

  int a, b, c;

  printf("\nPontuacao a: ");
  scanf("%d", &a);
  printf("\nPontuacao b: ");
  scanf("%d", &b);
  printf("\nPontuacao c: ");
  scanf("%d", &c);

  if ((a > b) && (a > c) && (b > c)) {
    printf("\nEm primeiro lugar ficou A: %d", a);
    printf("\nEm segundo lugar ficou B: %d", b);
    printf("\nEm terceiro lugar ficou C: %d", c);
  }else if ((b > a) && (b > c) && (c > a)) {
    printf("\nEm primeiro lugar ficou B: %d", b);
    printf("\nEm segundo lugar ficou C: %d", c);
    printf("\nEm terceiro lugar ficou A: %d", a);
  }else if ((c > a) && (c > b) && (a > b)) {
    printf("\nEm primeiro lugar ficou C: %d", c);
    printf("\nEm segundo lugar ficou A: %d", a);
    printf("\nEm terceiro lugar ficou B: %d", b);
  }
  

  return 0;
}