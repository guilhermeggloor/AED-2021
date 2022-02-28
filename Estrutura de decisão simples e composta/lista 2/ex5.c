// Calcular o valor do salário líquido de um programador, dado o número funções criadas, o 
// valor de cada função, o percentual de desconto do INSS é 8% sobre o salário bruto. Deverá 
// ser informado: o nome do funcionário, o salário bruto, o salário líquido. Validar os valores de 
// entrada.

#include <stdio.h>

int main() {

    float salario1, salario2, desconto;
    char nome;

    printf("\nInforme o nome do programador: ");
    scanf("%s", &nome);
    printf("\nInforme seu salario bruto: ");
    scanf("%f", &salario1);

    desconto = salario1 * 0.08;
    salario2 = salario1 - desconto;

    printf("\n------------------------------------------");
    printf("\nNome do programador: %c", nome);
    printf("\nO salario liquido e de: R$ %.2f", salario2);
    printf("\n------------------------------------------");

  return 0;  
}
