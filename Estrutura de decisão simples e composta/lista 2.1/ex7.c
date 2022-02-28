// Dado um número inteiro de três dígitos, informá-lo na forma CENTENA = x DEZENA = x 
// UNIDADE = x. Depois, informar qual parte é a maior (CENTENA, DEZENA ou UNIDADE). 

#include <stdio.h>

int main() {

   int x, centena, dezena, unidade; 

   printf("\nDigite um numero: ");
   scanf("%d", &x);

   if (x >= 100) {
    centena = x;
    dezena = x / 10;
    unidade = x / 100;
    printf("\nEm centena: %d",centena);
    printf("\nEm dezena: %d", dezena);
    printf("\nEm unidade: %d", unidade);
   }else if (x < 100) {
       printf("\nInforme um numero de 3 digitos pra cima! ");
   }
    

 return 0;   
}