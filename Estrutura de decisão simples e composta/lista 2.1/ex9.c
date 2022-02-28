// A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas 
// fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada 
// fatia de queijo ou presunto pesa 50 gramas e que a rodela de hambúrguer pesa 100 
// gramas, informe as quantidades (em quilos) de queijo, presunto e carne necessários para 
// compra, fornecido a quantidade de sanduíches a fazer pelo dono. 

#include <stdio.h>

int main() {

  float queijo, presunto, hamburguer, sanduiche, fatiaq, fatiap, rodelah;

  printf("\nInforme a quantidade de queijo em quilos: ");
  scanf("%f", &queijo);
  printf("\nInforme a quantidade de presunto em quilos: ");
  scanf("%f", &presunto);
  printf("\nInforme a quantidade de hamburguer em quilos: ");
  scanf("%f", &hamburguer);

  fatiaq = queijo * 0.050;
  fatiap = presunto * 0.050;
  rodelah = hamburguer * 0.100;

  sanduiche = 2 * fatiaq + fatiap + rodelah;

  printf("\nQuantidade de sanduiches a fazer: %.0f ", sanduiche);


  return 0;   
}