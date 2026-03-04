/*Scrivere un programma che chiede all’utente 10 valori interi, li stampa nell’ordine inserito,
li stampa nell’ordine inverso, stampa a video la somma di tutti i valori presenti nell’array e
stampa a video quanti valori sono positivi, quanti negativi e quante volte lo zero è stato
inserito.*/

#include <stdio.h>

int main(){
  int array[10], somma = 0, pos = 0, neg = 0, zeri = 0;
  printf("Inserisci i 10 valori dell'array:\n");

  for (int i = 0; i < 10; i++){
    scanf("%d", &array[i]);
    if(array[i] > 0)
      pos++;
    else if(array[i] < 0)
      neg++;
    else
      zeri++;
  }
  //Stampa nell'ordine inserito

  printf("Stampa nell'ordine inserito:\n");
  for(int j = 0; j < 10; j++)
    printf("%d ", array[j]);
  
  printf("\n");
  printf("\n");

  //Stampa nell'ordine inverso

  printf("Stampa nell'ordine inverso:\n");
  for(int k = 9; k >= 0; k--)
    printf("%d ", array[k]);
  
  printf("\n");
  printf("\n");

  //Somma dei valori nell'array

  printf("Somma dei valori nell'array:\n");
  for(int l = 0; l < 10; l++){
    somma += array[l];
  }
  printf("%d", somma);

  printf("\n");
  printf("\n");

  printf("Valori nell'array positivi: %d\n", pos);

  printf("\n");
  printf("\n");

  printf("Valori nell'array negativi: %d\n", neg);

  printf("\n");
  printf("\n");

  printf("0 inseriti nell'array: %d\n", zeri);

}