#include <stdio.h>

int main() {
  float num;

  printf("Digite um número real: \n");
  scanf("%f", &num);

  if (num >= 10) {
    printf("O número é maior ou igual a 10!");
  } else {
    printf("O número é menor que 10!");
  }
}