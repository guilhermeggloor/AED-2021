// Dado o peso de uma pessoa, informar o seu novo peso de acordo com se: 
// i. ENGORDOU: adicione 15% sobre seu peso inicial 
// ii. EMAGRECEU: retirar 20% sobre seu peso inicial

#include <stdio.h>

int main() {

    float peso, novopeso, pesof;

    printf("\nInforme o peso inicial: ");
    scanf("%f", &peso);
    printf("\nInforme o peso final: ");
    scanf("%f", &novopeso);

    if (peso < novopeso) {
        printf("\nENGORDOU! ");
        pesof = peso * 1.15;
        printf("\nPeso atual: %.1f", pesof);
    }else if (peso > novopeso) {
        printf("\nEMAGRECEU! ");
        pesof = novopeso - peso * 0.20;
        printf("\nPEso atual: %.1f", pesof);
    }    



 return 0;  
}