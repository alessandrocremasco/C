/*Scrivere un programma che chiede all’utente un numero intero positivo n (rifiuta eventuali
valori non corretti) e stampa a video quanti multipli di 3 sono presenti tra 0 e n incluso.*/
#include <stdio.h>

int main(){
  int n;

  printf("Inserisci un numero maggiore di 0:\n");
  scanf("%d", &n);

  while(n < 0){
    printf("Numero non valido. Riprova:\n");
    scanf("%d", &n);
  }
  printf("I numeri multipli di 3 compresi tra 0 e %d sono:\n", n);
  for (int i = 0; i < n+1; i++){
    if(i % 3 == 0)
      printf("%d ", i);
  }
}