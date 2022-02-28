// Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo 
// com o cargo, conforme a tabela abaixo. Faça um algoritmo que leia o salário e o cargo de um 
// funcionário e calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele 
// deverá, então, receber 40% de aumento. Mostre o salário antigo, o novo salário e a 
// diferença.

#include <stdio.h>

int main() {    

    int codigo;
    float salario, novosalario;

    printf("\nInforme o salario: ");
    scanf("%f", &salario);
    printf("\nInforme o codigo: ");
    scanf("%d", &codigo);

    if ((codigo == 101)) {
        printf("\nGerente! ");
        novosalario = salario * 1.10;
        printf("\nNovo salario: R$ %.2f", novosalario);
    }else if ((codigo == 102)) {
        printf("\nEngenheiro! ");
        novosalario = salario * 1.20;
        printf("\nNovo salario: R$ %.2f", novosalario);
    }else if ((codigo == 103)) {
        printf("\nTecnico! ");
        novosalario = salario * 1.30;
        printf("\nNovo salario: R$ %.2f", novosalario);
    }else if ((codigo < 101)) {
        printf("\ncodigo invalido! ");
    }



  return 0;  
}