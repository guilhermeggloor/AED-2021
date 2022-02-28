// Dadas três medidas, verificar se elas podem ser os comprimentos dos lados de um triângulo, 
// se forem, verificar se é eqüilátero (todos lados iguais), isósceles (dois lados iguais) ou 
// escaleno (todos lados diferentes). Um triângulo é uma figura geométrica fechada de três 
// lados, em que cada um é menor que a soma dos outros dois.

#include <stdio.h>

int main() {

    int a, b, c;

    printf("\nComprimento de A: ");
    scanf("%d", &a);
    printf("\nComprimento de B: ");
    scanf("%d", &b);
    printf("\nComprimento de C: ");
    scanf("%d", &c);

    if ((a == b) && (b == c)) {
        printf("\nTriangulo equilatero! ");
    }else {
        if ((a == b) && (b != c)) {
            printf("\nTriangulo isosceles");
        }else {
            if ((a != b) && (b != c )) {
                printf("\nTriangulo escaleno");
            }
        }
    }


  return 0;  
}