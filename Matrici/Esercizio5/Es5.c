//Data una matrice, restituire quanti numeri dispari ci sono per ogni colonna.

#include <stdio.h>
#define N 4

int main(){
  int matrix[N][N];

  printf("Inserisci i valori della matrice:\n");

  //Inserimento matrice
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      scanf("%d", &matrix[i][j]);
    }
    printf("\n");
  }
  //Stampa matrice
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  for (int j = 0; j < N; j++){
    int dispari = 0;
    for (int i = 0; i < N; i++){
      if(matrix[i][j] % 2 != 0)
      dispari++;
    }
    printf("Sulla colonna %d sono presenti %d numeri dispari.\n", j, dispari);
  }
}