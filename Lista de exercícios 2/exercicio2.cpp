#include <stdio.h>

int main() {
  float num;

  printf("Digite um n�mero real: \n");
  scanf("%f", &num);

  if (num >= 10) {
    printf("O n�mero � maior ou igual a 10!");
  } else {
    printf("O n�mero � menor que 10!");
  }
}