#include <stdio.h>

int main() {
  float num;

  printf("Digite um número real: \n");
  scanf("%f", &num);

  if (num > 0) {
    printf("O numero eh positivo.");
  } else if (num < 0) {
    printf("O numero eh negativo.");
  } else {
    printf("O numero eh 0.");
  }
}