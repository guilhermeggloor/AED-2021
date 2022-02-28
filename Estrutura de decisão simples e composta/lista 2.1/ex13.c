// Dado o valor do salário de uma pessoa e o valor de um financiamento pretendido, informe 
// as seguintes mensagens: 
// i. “Financiamento concedido”: caso o salário da pessoa seja maior ou igual a 5 vezes o 
// valor do financiamento 
// ii. “Financiamento concedido”: caso o financiamento seja menor ou igual a 5 vezes a 
// soma dos salários da pessoa e do seu cônjuge 
// iii. “Financiamento negado”: caso não foi possível conceder o financiamento 
// OBS: O valor do salário do cônjuge deverá ser obtido apenas quando necessário. A 
// mensagem “Obrigado por nos consultar!” deverá ser emitida independentemente de 
// conceder ou não o financiamento. 

#include <stdio.h>

int main() {

    int salario1,salario2, financiamento;

    printf("\nInforme o salario da pessoa: ");
    scanf("%d", &salario1);
    printf("\nInforme o salario do conjuge: ");
    scanf("%d", &salario2);
    printf("\nInforme o financiamento: ");
    scanf("%d", &financiamento);

    if (salario1 >= 5 * financiamento) {
      printf("\nFinanciamento concedido! ");
    }else if (financiamento <= 5 * salario1 + salario2) {
      printf("\nFinanciamento concedido! ");
    }else {
      printf("\nFinanciamento negado! ");
    }



  return 0;  
}