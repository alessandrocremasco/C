/*Si scriva un programma che copi tutti i valori di
una matrice int M[D1][D2] in un array di
dimensione D1*D2 eliminando nel processo di
copia tutti i duplicati negativi.*/

#include <stdio.h>
#define D1 4
#define D2 5

int main(){
  int matrix[D1][D2];
  int array[D1 * D2];
  int duplicato = 0;
  int c = 0;

  printf("Inserisci i valori della matrice:\n");

  for (int i = 0; i < D1; i++){
    for (int j = 0; j < D2; j++){
      scanf("%d", &matrix[i][j]);
    }
    printf("\n");
  }
  printf("La matrice stampata è:\n");
  for (int i = 0; i < D1; i++){
    for (int j = 0; j < D2; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < D1; i++){
    for(int j = 0; j < D2; j++){
      if(matrix[i][j] >= 0){
        array[c] = matrix[i][j];
      }
      else{
        
      }

      for (int k = 0, duplicato = 0; k < c && duplicato == 0; k++){
      if(matrix[i][j] == array[k])
        duplicato = 1;
      }

      if(duplicato == 0){
        array[c] = matrix[i][j];
        c++;
      }
    }
  }

  printf("Array senza numeri duplicati negativi:\n");
  for (int s = 0; s < c; s++){
    printf("%d ", array[s]);
  }
}

