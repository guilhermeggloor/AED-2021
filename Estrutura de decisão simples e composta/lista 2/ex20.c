// Dada a idade de um nadador, classificá-lo em uma das seguintes categorias:
// infantil A = 5 a 7 anos
// infantil B = 8 a 10 anos
// juvenil A = 11 a 13 anos
// juvenil B = 14 a 17 anos
// sênior = maiores de 18 anos

#include <stdio.h>

int main() {

    int idade;

    printf("\nInforme a idade do nadador: ");
    scanf("%d", &idade);

    if ((idade >= 5) && (idade <= 7)) {
        printf("\ninfantil A! ");
    }else {
        if ((idade >= 8) && (idade <= 10)) {
            printf("\nInfantil B! ");
        }else {
            if ((idade >= 11) && (idade <= 13)) {
                printf("\nJuvenil A! ");
            }else {
                if ((idade >= 14) && (idade <= 17)) {
                    printf("\nJuvenil B! ");
                }else {
                    if(idade >= 18) {
                        printf("\nSenior! ");
                    }else {
                        if (idade <5) {
                            printf("\nInclassificavel! ");
                        }
                    }
                }
            }
        }
    }


  return 0;  
}
