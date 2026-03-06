//Data una matrice, chiedere le coordinate r e c di una cella.
#include <stdio.h>
#define N 4

int main(){
  int matrix[N][N];
  int r, c;

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
  
  do{
    printf("Inserire il numero della riga:\n");
    scanf("%d", &r);
  }while(r < 0 || r >= N);

  do{
    printf("Inserire il numero della colonna:\n");
    scanf("%d", &c);
  }while(c < 0 || c >= N);

  printf("Le coordinate (%d,%d) fanno riferimento al valore: %d\n", r, c, matrix[r][c]);
}