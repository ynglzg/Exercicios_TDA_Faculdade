#include <stdio.h>
#include <string>
using namespace std;

int main() {
  string nome1, nome2;
  float peso1, peso2;

  printf("Digite o nome da primeira pessoa: \n");
  scanf("%s", &nome1);
  printf("Digite o peso da primeira pessoa: \n");
  scanf("%f", &peso1);
  printf("Digite o nome da segunda pessoa: \n");
  scanf("%s", &nome2);
  printf("Digite o peso da segunda pessoa: \n");
  scanf("%f", &peso2);

  if (peso1 > peso2) {
    printf("%s é mais pesado(a)!", nome1);
  } else if (peso1 < peso2) {
    printf("%s é mais pesado(a)!", nome2);
  } else {
    printf("%s e %s tem pesos iguais!", nome1, nome2);
  }
}