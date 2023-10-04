#include <stdio.h>

int main() {
  float num1, num2;
  printf("Digite um numero: \n");
  scanf("%f", &num1);
  printf("Digite outro numero: \n");
  scanf("%f", &num2);

  if (num1 > num2) {
    printf("O maior eh %0.2f e o menor eh %0.2f", num1, num2);
  } else if (num1 < num2) {
    printf("O maior eh %0.2f e o menor eh %0.2f", num2, num1);
  } else {
    printf("%0.2f e %0.2f sao iguais", num1, num2);
  }

}