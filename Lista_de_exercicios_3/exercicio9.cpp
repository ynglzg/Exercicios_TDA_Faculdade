#include <stdio.h>

int main () {
     int i, valor; 
     printf("Digite quantas vezes deseja imprimir: \n");
     scanf("%d", &valor);

     for(i = 1; i <= valor; i++) {
          printf("Hello World! \n");
     }
}