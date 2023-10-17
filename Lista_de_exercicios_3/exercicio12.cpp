#include <stdio.h>
#include <string.h>

// RESOLVIDO COM CHATGPT

int main () {
     int i, n, idade, idadeMaior = -1;
     char nome[100], nomeMaisVelho[100];
     printf("Digite quantos registros serao lidos: ");
     scanf("%d", &n);

     for(i = 0; i < n; i++) {
          printf("Digite o nome da pessoa %d: ", i + 1);
          scanf("%s", nome);
        
          printf("Informe a idade da pessoa %d: ", i + 1);
          scanf("%d", &idade);

          // Verificar se essa pessoa é mais velha do que a anterior
          if (idade > idadeMaior) {
               idadeMaior = idade;
               strcpy(nomeMaisVelho, nome);
          }   
     }
      printf("A pessoa mais velha eh %s, com %d anos.\n", nomeMaisVelho, idadeMaior);

}
