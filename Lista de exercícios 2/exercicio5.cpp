#include <stdio.h>

int main() {
  int num;

  printf("Digite um número inteiro: \n");
  scanf("%d", &num);

  if (num % 3 == 0) {
    printf("O numero eh divisivel por 3");
  } else {
    printf("O numero nao eh divisivel por 3");
  }
}