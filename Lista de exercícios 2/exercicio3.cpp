#include <stdio.h>

int main() {
  float num;

  printf("Digite um n�mero real: \n");
  scanf("%f", &num);

  if (num > 10) {
    printf("O n�mero � maior que 10!");
  } else if (num < 10) {
    printf("O n�mero n�o � maior que 10!");
  } else {
    printf("O n�mero � 10!");
  }
}