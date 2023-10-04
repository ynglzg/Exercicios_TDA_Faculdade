#include <stdio.h>

int main() {
  float nota1, nota2, nota3;

  printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
  printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
  printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

  if ((((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10) >= 6) {
    printf("O aluno foi aprovado!"); 
  } else {
    printf("O aluno foi reprovado!"); 
  }
}