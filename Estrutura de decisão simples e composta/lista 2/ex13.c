// Obter, dentre cinco números, a média dos ímpares

#include <stdio.h>

int main() {

  int a,b,c,d,e, soma;      

  printf("\nDigite o primeiro numero: ");
  scanf("%d", &a);
  printf("\nDigite o segundo numero: ");
  scanf("%d", &b);
  printf("\nDigite o terceiro numero: ");
  scanf("%d", &c);
  printf("\nDigite o quarto numero: ");
  scanf("%d", &d);
  printf("\nDigite o quintonumero: ");
  scanf("%d", &e);

  if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 != 0) && (e % 2 != 0)) {
    soma = a + b + c + d + e / 5;
    printf("\nMedia de A,B,C,D e E: %d", soma);
  }else {
    if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 == 0) && (d % 2 == 0) && (e % 2 == 0)) {
      soma = a + b / 2;
      printf("\nMedia de A e B: %d", soma);
    }else {
      if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 != 0) && (d % 2 == 0) && (e % 2 == 0)) {
        soma = a + c / 2;
        printf("\nMedia de A e C: %d", soma);
      }else {
        if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 == 0) && (d % 2 != 0) && (e % 2 == 0)) {
          soma = a + d / 2;
          printf("\nMedia de A e D: %d", soma);
        }else {
          if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 == 0) && (e % 2 == 0)) {
            soma = b + c / 2;
            printf("\nMedia de B e C: %d", soma);
          }else {
            if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 == 0) && (d % 2 != 0) && (e % 2 == 0)) {
              soma = b + d / 2;
              printf("\nMedia de B e D: %d", soma);
            }else {
              if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 == 0) && (d % 2 == 0) && (e % 2 != 0)) {
                soma = b + e / 2;
                printf("\nMedia de B e E: %d", soma);
              }else {
                if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 != 0) && (d % 2 != 0) && (e % 2 == 0)) {
                  soma = c + d / 2;
                  printf("\nMedia de C e D: %d", soma);
                }else {
                  if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 != 0) && (d % 2 == 0) && (e % 2 != 0)) {
                    soma = c + e / 2;
                    printf("\nMedia de C e E: %d", soma);
                  }else {
                    if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0) && (d % 2 != 0) && (e % 2 != 0)) {
                      soma = d + e / 2;
                      printf("\nMedia de D e E: %d", soma);
                    }else {
                      if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 == 0) && (e % 2 == 0)) {
                        soma = a + b + c / 3;
                        printf("\nMedia de A,B e C: %d", soma);
                      }else {
                        if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 == 0) && (d % 2 != 0) && (e % 2 == 0)) {
                          soma = a + b + d / 3;
                          printf("\nMedia de A,B e D: %d", soma);
                        }else {
                          if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 == 0) && (d % 2 == 0) && (e % 2 != 0)) {
                            soma = a + b + e / 3;
                            printf("\nMedia de A,B e E: %d", soma);
                        }else {
                          if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 != 0) && (d % 2 != 0) && (e % 2 == 0)) {
                            soma = a + c + d / 3;
                            printf("\nMedia de A,C e D: %d", soma);
                          }else {
                            if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 != 0) && (d % 2 == 0) && (e % 2 != 0)) {
                              soma = a + c + e / 3;
                              printf("\nMedia de A,C e E: %d", soma);
                            }else {
                              if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 != 0) && (e % 2 != 0)) {
                                soma = a + d + e / 3;
                                printf("\nMedia de A,D e E: %d", soma);
                              }else {
                                if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 != 0) && (e % 2 == 0)) {
                                  soma = b + c + d / 3;
                                  printf("\nMedia de B,C e D: %d", soma);
                                }else {
                                  if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 == 0) && (e % 2 != 0)) {
                                    soma = b + c + e / 3;
                                    printf("\nMedia de B,C e E: %d", soma);
                                  }else {
                                    if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 == 0) && (d % 2 != 0) && (e % 2 != 0)) {
                                      soma = b + d + e / 3;
                                      printf("\nMedia de B,D e E: %d", soma);
                                    }else {
                                      if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 != 0) && (e % 2 == 0)) {
                                        soma = a + b + c + d / 4;
                                        printf("\nMedia de A,B,C e D: %d", soma);
                                      }else {
                                        if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 != 0) && (e % 2 != 0)) {
                                          soma = a + b + d + e / 4;
                                          printf("\nMedia de A,B,C e E: %d", soma);
                                        }else {
                                          if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 != 0) && (d % 2 != 0) && (e % 2 != 0)) {
                                            soma = b + c + d + e / 4;
                                            printf("\nMedia de B,C,D e E: %d", soma);
                                          }else {
                                            if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0) && (d % 2 == 0) && (e % 2 == 0)) {
                                              printf("\nTodos os numeros sao pares! Digite numeros impares para calcular a media ");
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }        

  return 0;  
}