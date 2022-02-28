// Faça um algoritmo que sorteia um número de 1 a 99 e pede ao usuário que o adivinhe, lendo do 
// teclado o palpite. Caso o usuário acerte ou não, é mostrada uma mensagem apropriada. Use a função 
// pré-definida Rand(N), que sorteia um número inteiro entre 0 e N. 

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


 int main(){
	
	int numero, palpite;

	srand(time(NULL));
	numero = rand() % 99;
	
	printf("\nTente adivinhar um numero dentre 1 e 99: ");
	scanf("%d", &palpite);

	if (palpite == numero) {
		printf("\nParabens voce acertou! ");
	}else if (palpite != numero) {
		printf("\nTente novamente mais tarde! ");
		printf("\nNumero: %d", numero);
	}

	return 0;
 }