// Calcule a dívida do cheque especial ao ser quitada 6 meses depois a uma taxa de 5% de 
// juros. O valor do empréstimo deve ser informado

#include <stdio.h>

int main() {

    float emprestimo, taxa, meses, divida;

    printf("\nDigite o valor do emprestimo: ");
    scanf("%f", &emprestimo);

    meses = 6;
    taxa = emprestimo * 0.05;
    divida = emprestimo + taxa*meses;

    printf("\n--------------------------------------------------------");
    printf("\nValor da divida do cheque especial apos 6 meses: %.2f", divida);
    printf("\n--------------------------------------------------------");

  return 0;  
}