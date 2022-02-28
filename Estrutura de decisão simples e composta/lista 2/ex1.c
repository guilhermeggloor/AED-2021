// Dado um número verifique se ele é maior que 10.

#include <stdio.h>

int main() {

    int numero;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);


    if (numero > 10) 
    {
        printf("\nO numero e maior que 10! ");
    }else 
    {
        if(numero < 10) 
        {
            printf("\nO numero e menor que 10! ");
        }
    }


  return 0;  
}