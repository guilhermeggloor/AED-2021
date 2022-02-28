// Dado o valor do salário-mínimo e um determinado salário, calcule quantos salários mínimos estão contidos nele.

#include <stdio.h>

int main() {

    int salario, salariominimo;

    printf("\nInforme o valor do seu salario: ");
    scanf("%d", &salario);

    salariominimo = 1100.00;
    salario = salario / salariominimo;

    printf("\n---------------------------------------------------");
    printf("\nA quantidade de salarios minimos e de: %d", salario);
    printf("\n---------------------------------------------------");

  return 0;  
}