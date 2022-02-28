// Verificar se um triângulo é retângulo, acutângulo ou obtusângulo, dadas três medidas.

#include <stdio.h>
#include <math.h>

int main() {

  int a,b,c;

  printf("\nInforme a Primeira medida: ");
  scanf("%d", &a);
  printf("\nInforme a Segunda medida: ");
  scanf("%d", &b);
  printf("\nInforme a Terceira medida: ");
  scanf("%d", &c);

  if ((a < b) && (a < c) && (b > a) && (b < c) && (c > a) && (c > b)) {
    printf("\nTriangulo retangulo! ");
  }else {
    if ((a < b) && (a > c) && (b > a) && (b > c) && (c < a) && (c < b)) {
      printf("\nTriangulo acutangulo! ");
    }else {
      if ((a > b) && (a > c) && (b < a ) && (b > c) && (c < a) && (c < b)) {
        printf("\ntriangulo obtusangulo! ");
      }
    }
  }



  return 0;  
}