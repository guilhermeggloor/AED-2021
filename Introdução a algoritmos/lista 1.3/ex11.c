// Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em 
// segundos e mostre-o expresso em horas, minutos e segundos.

#include <stdio.h>

int main() {

    int segundos, horas, minutos;

    printf("\nTempo de duracao em segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    horas = minutos / 60;   

    if(minutos >= 60) {
        horas = horas + 1;
        minutos = minutos - 60;
    }

    printf("\n-----Tempo de duracao do evento-------");
    printf("\nEm horas: %d", horas);
    printf("\nEm minutos: %d", minutos);
    printf("\nEm segundos: %d", segundos);
    printf("\n-----------FIM----------------");



  return 0;
}