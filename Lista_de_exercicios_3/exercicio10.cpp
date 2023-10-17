#include <stdio.h>

int main () {
     int i, valor;
     char palavra[20]; 
     printf("Digite uma palavra: \n");
     scanf("%s", &palavra);
     printf("Digite quantas vezes deseja imprimir: \n");
     scanf("%d", &valor);

     for(i = 1; i <= valor; i++) {
          printf("%s \n", palavra);
     }
}