// Uma empresa tem para um determinado funcionário uma ficha contendo o nome, número de horas 
// trabalhadas e o número de dependentes de um funcionário. 
// Considerando que: 
// A empresa paga 12 reais por hora e 40 reais por dependentes. 
// Sobre o salário são feito descontos de 8,5% para o INSS e 5% para IR. 
// Faça um algoritmo para ler o nome, número de horas trabalhadas e número de dependentes de um 
// funcionário. Após a leitura, escreva qual o nome, salário bruto, os valores descontados para cada 
// tipo de imposto e finalmente qual o salário líquido do funcionário. 

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int horas,dependentes, salariobruto, salarioliquido, desconto1, desconto2;  
  char nome;   

  printf("\nDigite o nome do funcionario: ");
  scanf("%s", &nome);
  printf("\nDigite o numero de horas trabalhadas: ");
  scanf("%d", &horas);
  printf("\nDigite o numero de dependentes de um funcionario: ");
  scanf("%d", &dependentes);

  salariobruto = horas * 12 * 30 + dependentes * 40;
  desconto1 = salariobruto * 0.085;
  desconto2 = salariobruto * 0.05;
  salarioliquido = salariobruto - desconto1 + desconto2;
    
  printf("\n------------------------");
  printf("\nNome: %c", nome);
  printf("\nValor descontado do INSS: R$ %d", desconto1);
  printf("\nValor descontado do IR: R$ %d", desconto2);
  printf("\nSalario liquido do funcionario: R$ %d", salarioliquido);

  return 0;  
}