#include <stdio.h>

int main() {
  float num;

  printf("Digite um número real: \n");
  scanf("%f", &num);

  if (num > 10) {
    printf("O número é maior que 10!");
  } else if (num < 10) {
    printf("O número não é maior que 10!");
  } else {
    printf("O número é 10!");
  }
}