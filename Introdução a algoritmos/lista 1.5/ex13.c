// Calcule a quantidade de latas de tinta necessárias e o custo para pintar tanques cilíndricos 
// de combustível, em que são fornecidos a altura e o raio desse cilindro. Sabe-se que
// a. A lata de tinta custa R$ 34,20
// b. Cada lata contém 5 litros
// c. Cada litro de tinta pinta 3 metros quadrados

#include <stdio.h>

int main() {

  int h, r, a, v;
  float pi = 3.14, custo, lata, litro;

  printf("\nInforme a altura do cilindro: ");
  scanf("%d", &h);
  printf("\nInforme o raio do cilindro: ");
  scanf("%d", &r);

  a = 2 * pi * r * h + 2 * pi * r * r;
  v = pi * r * r * h;   

  litro = a * 3.0;
  lata = v / litro * 5.0;
  custo = lata * 34.20;

  printf("\n----------------------------------");
  printf("\nQuantidade de latas: %f", lata);
  printf("\nO custo sera de: R$ %.2f", custo);

  return 0;  
}