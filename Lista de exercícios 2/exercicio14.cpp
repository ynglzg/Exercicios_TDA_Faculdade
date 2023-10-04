#include <stdio.h>
#include <string>
using namespace std;

int main() {
  float media, nota1, nota2, nota3;
  string nome;
  int pronome;

  // pergunta o nome
  printf("Digite seu nome: \n");
  scanf("%s", &nome);

  // pergunta o pronome
  printf("Escolha seu genero: \n");
  printf("1 - Feminino \n");
  printf("2 - Masculino \n");
  printf("3 - Outro \n");
  scanf("%d", &pronome);
  switch (pronome) {
  case 1:
    pronome = 1;
    break;
  case 2:
    pronome = 2;
    break;
  case 3:
    pronome = 3;
    break;
  default:
    break;
  }

  printf("Digite a media: \n");
    scanf("%f", &media);
  printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
  printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
  printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

  if (pronome == 1) {
    if (((nota1 + nota2 + nota3) / 3) >= media) {
    printf("A aluna %s foi aprovada com media %0.2f", nome, ((nota1 + nota2 + nota3) / 3));
  } else {
    printf("A aluna %s foi reprovada com media %0.2f", nome, ((nota1 + nota2 + nota3) / 3));
    }
  } else if (pronome == 2) {
    if (((nota1 + nota2 + nota3) / 3) >= media) {
    printf("O aluno %s foi aprovado com media %0.2f", nome, ((nota1 + nota2 + nota3) / 3));
  } else {
    printf("O aluno %s foi reprovado com media %0.2f", nome, ((nota1 + nota2 + nota3) / 3));
    }
  } else {
    if (((nota1 + nota2 + nota3) / 3) >= media) {
    printf("alune %s foi aprovade com media %0.2f", nome, ((nota1 + nota2 + nota3) / 3));
  } else {
    printf("alune %s foi reprovade com media %0.2f", nome, ((nota1 + nota2 + nota3) / 3));
    }
  }

}