// João recebeu seu salário e deve duas contas que estão atrasadas. Como as contas estão 
// atrasadas, ele terá que pagar multa de 2% sobre cada conta. Informar quais contas 
// poderão ser pagas e quanto restará de seu salário.

#include <stdio.h>

int main() {

  float salario, conta1, conta2, multa1, multa2, valorf1, valorf2, valorf3;

  printf("\nInforme seu salario: ");
  scanf("%f", &salario);
  printf("\nValor da primeira conta: ");
  scanf("%f", &conta1);
  printf("\nValor da segunda conta: ");
  scanf("%f", &conta2);


  if ((conta1 > salario) && (conta2 < salario)) {
    printf("\nApenas a segunda conta podera ser paga! ");
    multa2 = conta2 * 0.02;
    valorf2 = salario - conta2 + multa2;
    printf("\nResto do salario: %.2f", valorf1);
  }else if ((conta1 < salario) && (conta2 > salario)) {
    printf("\nApenas a primeira conta podera ser paga! ");
    multa1 = conta1 * 0.02;
    valorf1 = salario - conta1 + multa1;
    printf("\nResto do salario: %.2f", valorf2);
  }else if ((conta1 < salario) && (conta2 < salario)) {
    printf("\nAmbas as contas serao pagas! ");
    multa1 = conta1 * 0.02;
    valorf1 = salario - conta1 + multa1;
    multa2 = conta2 * 0.02;
    valorf2 = salario - conta2 + multa2;
    valorf3 = valorf1 - valorf2;
    printf("\nResto do salario: %.2f", valorf3);
  }


  return 0;  
}