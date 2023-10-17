#include <stdio.h>

int main() {
     float numeroReal, numeroMaior;

     for (int i = 0; i < 10; i++) {
          printf("Digite o %d numero real: \n", i + 1);
          scanf("%f", &numeroReal);

          if (numeroReal > numeroMaior) {
               numeroMaior = numeroReal;
          }
     }
     printf("%.2f eh o maior numero! ", numeroMaior);
}