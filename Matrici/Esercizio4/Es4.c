//Data una matrice, contare per ogni riga il numero di valori pari con array di contatori.

#include <stdio.h>
#define N 4

int main(){
  int matrix[N][N];
  int pari[N] = {0};

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
      if(matrix[i][j] % 2 == 0){
        pari[i]++;
      }
    }
  }

  for (int i = 0; i < N; i++){
    printf("\n%d:", i);
    for (int j = 0; j < pari[i]; j++){
      printf("*");
    }
  }
}