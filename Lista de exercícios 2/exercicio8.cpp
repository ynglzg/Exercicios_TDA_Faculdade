#include <stdio.h>

int main() {
  float num;

  printf("Digite um n�mero: \n");
    scanf("%f", &num);
  if (num > 20) {
    printf("%f", num / 2);
  } else {
    printf("%0.2f", num * 2);
  }
}
