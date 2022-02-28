// Calcular o valor do salário líquido de um programador, dado o número funções criadas, o 
// valor de cada função, o percentual de desconto do INSS é 8% sobre o salário bruto. Deverá 
// ser informado: o nome do funcionário, o salário bruto, o salário líquido.


#include <stdio.h>

int main() {

    float salario, desconto, salariob;
    char nome;  

    printf("\nDigite o nome do funcionario: ");
    scanf("%s", &nome);
    printf("\nSalario bruto: ");
    scanf("%f", &salariob);

    desconto = salariob * 0.08;
    salario = salariob - desconto;

    printf("\nNome do Programador: %c", nome);
    printf("\nSeu salario bruto: R$ %.2f", salariob);
    printf("\nSeu salario liquido: R$ %.2f", salario);


 return 0;
}