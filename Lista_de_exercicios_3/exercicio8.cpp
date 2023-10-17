#include <stdio.h>

int main () {
     int valor1 = 0, cont = 1;
     for(cont = 1; cont <= 100; cont++) {
          valor1 += cont;
     }
     printf("Resultado: %d \n", valor1);
     printf("Fim do programa!");
}