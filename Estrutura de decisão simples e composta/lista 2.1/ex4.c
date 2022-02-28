// O restaurante Bem-Bão cobra R$ 18,00 por cada quilo de refeição. O cliente que 
// ultrapassar 650 gramas, paga R$ 15,00 e pode comer a vontade. Informar quanto o cliente 
// pagará e o tipo de opção (por quilo ou livre) de sua refeição. Assuma que a balança já 
// desconte o peso do prato. 

#include <stdio.h>

int main() {

  float quilo, pagamento; 

  printf("\nInforme o peso do seu prato em kilos: ");
  scanf("%f", &quilo);

  if (quilo < 0.65) {
    pagamento = quilo * 18;
    printf("\nOpcao: Quilo! ");
    printf("\nValor a ser pago: R$ %.2f", pagamento);
  }else if (quilo >= 0.65) {
    printf("\nOpcao: livre! ");
    printf("\nValor a ser pago: R$ 15.00");
  }


  
  

  

  return 0;  
}