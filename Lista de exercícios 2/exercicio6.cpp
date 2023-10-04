#include <stdio.h>

int main() {
  int num, divisor;

  printf("Digite um número inteiro: \n");
    scanf("%d", &num);
  printf("Digite um número a ser testado: \n");
    scanf("%d", &divisor);

  if (num % divisor == 0) {
    printf("O numero eh divisivel por %d", divisor);
  } else {
    printf("O numero nao eh divisivel por %d", divisor);
  }
}