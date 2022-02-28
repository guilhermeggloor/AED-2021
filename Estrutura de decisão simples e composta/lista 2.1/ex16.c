// O IMC (Índice de Massa Corporal) é um critério da Organização Mundial de Saúde para 
// dar uma indicação sobre a condição de peso de uma pessoa adulta. Entretanto, a NHANES 
// II (National Health and Nutrition Examination Survey) indica a utilização de um critério 
// diferenciado para homens e mulheres. A fórmula é IMC = peso / altura2
// . Dado o peso, 
// altura e sexo (M ou F) de uma pessoa, informe sua condição de acordo com os critérios da 
// NHANES II. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

    float peso, altura, IMC;
    char sex;

    printf("\nInforme o peso em kg: ");
    scanf("%f", &peso);
    printf("\nInforme a altura em metros: ");
    scanf("%f", &altura);
    printf("\nInforme M para masculino e F para feminino: ");
    scanf("%s", &sex);

    IMC =  peso / (altura * altura);

    if (sex == 'M') {
        if (IMC < 19.1) {
            printf("\nAbaixo do peso! ");
        }else if ((IMC >= 19.1) && (IMC < 25.8)) {
            printf("\nPeso normal! ");
        }else if ((IMC >= 25.8) && (IMC < 27.3)) {
            printf("\nMarginalmente acima do peso! ");
        }else if ((IMC >= 27.3) && (IMC <= 32.3)) {
            printf("\nAcima do peso! ");
        }else if ((IMC > 32.3)) {
            printf("\nObeso! ");
        }
    }else if ( sex == 'F') {
        if (IMC < 19.1) {
            printf("\nAbaixo do peso! ");
        }else if ((IMC >= 19.1) && (IMC < 25.8)) {
            printf("\nPeso normal! ");
        }else if ((IMC >= 25.8) && (IMC < 27.3)) {
            printf("\nMarginalmente acima do peso! ");
        }else if ((IMC >= 27.3) && (IMC <= 32.3)) {
            printf("\nAcima do peso! ");
        }else if ((IMC > 32.3)) {
            printf("\nObesa! ");
        }
    }else {
        printf("\nInvalido! ");
    }

    
    


    return 0;
}
