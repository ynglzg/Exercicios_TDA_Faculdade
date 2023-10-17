#include <stdio.h>

int main () {
     int i, n, x = 0, y = 0; 
     printf("Digite quantos numeros serao lidos: \n");
     scanf("%d", &n);
     printf("Digite os numeros a serem calculados: \n");

     for(i = 1; i <= n; i++) {
          y = x;
          scanf("%d", &x);
          x += y;
     }
     printf("Resultado: %d \n", x / n);
}
