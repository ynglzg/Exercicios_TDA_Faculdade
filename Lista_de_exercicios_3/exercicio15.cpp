#include <stdio.h>

int main() {
     int i = 0, x;
     float numeroReal, numeroLista[100];

     do {
          printf("Digite os numeros a serem ordenados: \n");
          scanf("%f", &numeroReal);
          numeroLista[i] = numeroReal;
          i++;
     } while (numeroReal != 0);

     // printar cada numero da array desordenada
     printf("Array desordenada: \n");
     for (x = 0; x < i; x++){
          printf("%.1f | ", numeroLista[x]);
     }

          // algoritmo bubble sort ERRADO
          // for (int j = 0; j < i - 1; j++) {
          //      int aux;
          //      int arraySize = sizeof(numeroLista);
          //      for(n = 0; n < arraySize - 1; n++) {
          //           if(numeroLista[n] > numeroLista[n + 1]) {
          //                aux = numeroLista[n];
          //                numeroLista[n] = numeroLista[n + 1];
          //                numeroLista[n + 1] = aux;
          //           }
          //      }
          // }

     // bubble sort q funciona (valeu árthur!)
     // i = comprimento total da array
     // j = força a parada do loop quando chega no penultimo
     // k = numero sendo comparado com o proximo(k + 1)
     for (int j = 0; j < i - 1; j++) {
        for (int k = 0; k < i - j - 1; k++) {
            if (numeroLista[k] > numeroLista[k + 1]) {
               float aux = numeroLista[k];
               numeroLista[k] = numeroLista[k + 1];
               numeroLista[k + 1] = aux;
            }
        }
    }
     // printar cada numero da array ordenada
     printf("\nArray ordenada: \n");
     for (x = 0; x < i; x++){
          printf("%.1f | ", numeroLista[x]);}
}