// Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a 
// expressa apenas em dias.

#include <stdio.h>

int main() {

  int idade, ano, meses, dias;

  printf("\nQuantos anos voce tem ? ");
  scanf("%d", &idade);

  dias = idade * 360;

  printf("\nidade expressa em dias: %d dias", dias);


  return 0;  
}