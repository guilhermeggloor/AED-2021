// Dado um horário, calcule quantos minutos e segundos transcorreram desde o início do dia.

#include <stdio.h>

int main() {

  int segundo, minuto, hora, resto;

  printf("\nInforme o horário: ");
  scanf("%d", &hora);

  if(hora > 24) {
    resto = hora - 24;
    hora = 0 + resto;
  }
  minuto = hora * 60;
  segundo = minuto * 60;


  printf("\n-----------------------------------");
  printf("\nMinutos: %d", minuto);
  printf("\nSegundo: %d", segundo);
  printf("\n-----------------------------------");

  return 0;
}