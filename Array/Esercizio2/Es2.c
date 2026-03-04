/*Scrivere un programma che chiede all’utente di riempire un array di 10 interi, lo stampa a
video e stampa a video, per ogni elemento dell’array (escluso quello in posizione 0), la
somma con il precedente.*/

#include <stdio.h>

int main(){
  int array[10];
  
  printf("Inserisci i 10 vari dell'array:\n");

  for (int i = 0; i < 10; i++)
    scanf("%d", &array[i]);
  
  printf("Stampa dei valori:\n");
  for(int j = 0; j < 10; j++)
    printf("%d ", array[j]);
  
  printf("\n");
  printf("\n");

  printf("Stampa con valori sommati al loro precedente:\n");
  int temp;
  for (int k = 1; k < 10; k++){
    temp = array[k] + array[k-1];
    printf("%d ", temp);
  }
}