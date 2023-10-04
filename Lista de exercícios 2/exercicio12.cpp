#include <stdio.h>

int main() {
  float num;
  printf("Digite um numero: \n");
  scanf("%f", &num);
  if (num >= 20 && num <= 90) {
    printf("O numero esta entre 20 e 90!");
  } else {
    printf("O numero nao esta entre 20 e 90!");
  }
}