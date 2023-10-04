#include <stdio.h>

int main() {
  int num1, num2;

  printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
  printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
  if ((num1 + num2) > 10) {
    printf("%d", (num1 + num2)*(num1 + num2));
  } else {
    printf("%d", (num1 + num2) / 2);
  }
}
