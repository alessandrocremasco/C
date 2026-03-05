//Data una matrice, contare i numeri pari per ogni riga.

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
    int pari = 0;
    for (int j = 0; j < N; j++){
      if(matrix[i][j] % 2 == 0)
        pari++;
    }
    printf("Nella riga %d sono presenti %d numeri pari.\n", i+1, pari);
  }
}