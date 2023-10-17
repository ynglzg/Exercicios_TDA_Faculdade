#include <stdio.h>

int main () {
     int i, n, idadeHomem, idadeMulher, idadeTotalMasculina,idadeTotalFeminina,  sexo, qntdHomem, qntdMulher;
     printf("Digite quantos registros serao lidos: ");
     scanf("%d", &n);

     for(i = 0; i < n; i++) {
          printf("Selecione o sexo da pessoa %d: \n", i + 1);
          printf("(1) Masculino\n");
          printf("(2) Feminino\n");
          scanf("%d", &sexo);

          switch (sexo) {
               case 1: 
                    printf("Informe a idade do homem %d: \n", qntdHomem + 1);
                    scanf("%d", &idadeHomem);
                    idadeTotalMasculina += idadeHomem;
                    qntdHomem++;
               break;
               case 2:
                    printf("Informe a idade da mulher %d: \n", qntdMulher + 1);
                    scanf("%d", &idadeMulher);
                    idadeTotalFeminina += idadeMulher;
                    qntdMulher++;
               break;
               default:
               printf("opcao invalida.");
               break;
          }
     }
     printf("A media de idade entre os %i homens eh de: %i \n", qntdHomem, idadeTotalMasculina/qntdHomem);
     printf("A media de idade entre as %i mulheres eh de: %i \n", qntdMulher, idadeTotalFeminina/qntdMulher);
}