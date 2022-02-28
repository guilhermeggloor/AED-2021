// Encontrar a soma de todos os números ímpares que são múltiplos de três e que se encontram no
// conjunto dos números de 100 a 500 (inclusive os extremos). A quantidade de números é 100.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {

    int numeros, quantidade = 100;
    srand(time(NULL));
    

    for(numeros = 100; numeros <= 500; numeros++) {
        printf("\n%d", quantidade = 100 + (rand() % 500));
    }

    

    return 0;
}