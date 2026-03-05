//Data una matrice, restituire la somma degli elementi della diagonale principale.

#include <stdio.h>
#define N 4
int main(){
  int matrix[N][N], somma = 0;

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

  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if (i == j)
        somma += matrix[i][j];
    }
  }

  printf("La somma degli elementi della diagonale principale è: %d\n", somma);
}