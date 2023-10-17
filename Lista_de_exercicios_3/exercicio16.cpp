#include <stdio.h>

int main() {
  int i = 0, idadeAluno, option, idadesTotal[100], qntdMais18 = 0, qntdAte18 = 0;
  float somaIdades = 0, mediana;

  do {
    printf("digite a idade do aluno: ");
    scanf("%d", &idadeAluno);
    idadesTotal[i] = idadeAluno;
    i++;
    printf("Deseja adicionar mais um aluno? \n");
    printf("(1) - Sim | (2) - Nao \n");
    scanf("%d", &option);
  } while(option == 1);
  
    // bubble sort
    for (int j = 0; j < i - 1; j++) {
      for (int k = 0; k < i - j - 1; k++) {
        if (idadesTotal[k] > idadesTotal[k + 1]) {
          float aux = idadesTotal[k];
          idadesTotal[k] = idadesTotal[k + 1];
          idadesTotal[k + 1] = aux;
        }
      }
    }

    for (int l = 0; l < i; l++){
      if(idadesTotal[l] > 18){
        qntdMais18++;
      } else {
        qntdAte18++;
      }
    }

    for(int m = 0; m < i; m++){
      somaIdades += idadesTotal[m];
      
    }

    if (i % 2 == 1){
      mediana = idadesTotal[i / 2];
    } else{
      mediana = (idadesTotal[(i/2) - 1] + idadesTotal[i/2]) / 2;
    }

    printf("idades: \n");
     for (int x = 0; x < i; x++){
        printf("%.d | ", idadesTotal[x]);
     }
  
    printf("\nidade do aluno mais novo: %d\n", idadesTotal[0]);
    printf("idade do aluno mais velho: %d\n", idadesTotal[i - 1]);
    printf("alunos com mais de 18 anos: %d\n", qntdMais18);
    printf("alunos com ate 18 anos: %d\n",qntdAte18);
    printf("media aritmetica das idades: %.2f\n", somaIdades / i);
    printf("mediana das idades: %.2f\n", mediana);
}