#include <stdio.h>

int main () {
     int i;
     for(i = 1000; i >= 1; i--) {
          if (i % 2 == 0){
               printf("%d \n", i);
          } else {
               continue;
          }
     }
     printf("Fim do programa!");
}