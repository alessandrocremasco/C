/*Scrivere un programma che chiede all’utente di
riempire una matrice quadrata 5x5 di caratteri
(qualsiasi valore char). Il programma individua il
carattere che compare più frequentemente e lo
mostra a schermo (si ipotizzi che sia sempre
unico). Inoltre il programma visualizza il
contenuto della matrice, mostrando però un
asterisco al posto dei caratteri uguali a quello
individuato.*/

#include <stdio.h>
#define N 5

int main(){
  char matrix[N][N];
  int maxCounter = 0;
  char mostFrequent;

  printf("Inserisci i caratteri nella matrice:\n");
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      scanf("%c", &matrix[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      printf("%c ", matrix[i][j]);
    }
    printf("\n");
  }

  for(int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      int counter = 0;
      for (int x  = 0; x < N; x++){
        for (int y = 0; y < N; y++){
          if(matrix[x][y] == matrix[i][j])
            counter++;
        }
      }
      if(counter > maxCounter){
        maxCounter = counter;
        mostFrequent = matrix[i][j];
      }
    }
  
  }

  printf("Il carattere più frequente è: %c.\n", mostFrequent);

  printf("La matrice con asterischi è:\n");
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if(matrix[i][j] == mostFrequent)
        printf("* ");
      else
        printf("%c ", matrix[i][j]);
    }
    printf("\n");
  }


}