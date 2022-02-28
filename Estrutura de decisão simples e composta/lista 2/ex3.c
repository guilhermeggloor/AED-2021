// Dado um número informe em qual dos intervalos ele se encontra:
// Intervalo A : de 0 a 20
// Intervalo B : de –5 a –1
// Intervalo C : de 21 a 60
// Intervalo D : de –100 a 15

#include <stdio.h>

int main() {
    int numero;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if ((numero >= 0) && (numero <= 20)) 
    {
        printf("\nO numero esta no intervalo A");
    }else 
    {
        if ((numero >= -5) && (numero <= -1)) 
        {
            printf("\nO numero esta no intervalo B");
        }else 
        {
            if ((numero >= 21) && (numero <= 60)) 
            {
                printf("\nO numero esta no intervalo C");
            }else 
            {
                if ((numero >= -100) && (numero <= 15)) 
                {
                    printf("\nO numero esta no intervalo D");
                }
            }
        }
    }


 return 0;   
}