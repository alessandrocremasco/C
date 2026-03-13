/*Scrivere un programma che data una matrice int
A[M][M] esegua la sommatoria di tutti gli
elementi che si trovano sopra la diagonale
principale.*/

#include <stdio.h>
#define M 4

int main(){
  int A[M][M];
  int somma = 0;
  printf("Inserire i valori nella matrice:\n");

  for (int i = 0; i < M; i++){
    for (int j = 0; j < M; j++){
      scanf("%d", &A[i][j]);
    }
  }

  printf("La matrice è:\n");

  for (int i = 0; i < M; i++){
    for (int j = 0; j < M; j++){
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < M; i++){
    for (int j = 0; ){
      
    }
  }
}