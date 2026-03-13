/*Scrivere un programma che data una matrice int
A[M][M] verifichi se per ogni elemento x della
diagonale principale esiste un elemento y della
diagonale secondaria tale che y>x.*/

#include <stdio.h>
#define M 4

int main(){
  int A[M][M];

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

  int var1;
  int var2;
  
  int maxNumber1 = 0;
  for (int x = 0, y = 0; x < M; x++, y++){
    
    if(maxNumber1 < A[x][y]){
      maxNumber1 = A[x][y];
      var1 = maxNumber1;
    }
  }  
  int maxNumber2 = 0;
  for (int i = 0; i < M; i++){
    if(maxNumber2 < A[i][M-1-i]){
      maxNumber2 = A[i][M-1-i];
      var2 = maxNumber2;
    }
  }
  if(var2 > var1)
    printf("Risultato: positivo.\n");
  else
    printf("Risultato: negativo.\n");
}