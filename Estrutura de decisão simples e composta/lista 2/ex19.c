// Verificar a validade de uma senha fornecida, sendo a senha um conjunto de cinco caracteres 
// que são ´ASDFG´.

#include <stdio.h>


int main() {

    char senha;

    printf("\nInforme a senha: ");
    scanf("%s", &senha);

    if (senha == 'ASDFG') {
        printf("\nSenha valida! ");
    }else {
        printf("\nSenha invalida! ");
    }    




  return 0;  
}