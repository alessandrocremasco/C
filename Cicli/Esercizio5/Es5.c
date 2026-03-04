/*Scrivere un programma che chiede all’utente un numero 
intero positivo n (rifiuta eventuali valori non corretti)
e stampa a video i soli valori pari presenti tra 0 e n 
compreso.*/

#include <stdio.h>

int main(){
  int n;

  printf("Inserisci un numero intero positivo > 0:\n");
  scanf("%d", &n);

  while (n < 0){
    printf("n deve essere maggiore di 0. Inserisci di nuovo un numero:\n");
    scanf("%d", &n);
  }

  printf("I numeri pari compresi tra 0 e %d sono:\n", n);
  for (int i = 0; i < n+1; i++){
    if (i % 2 == 0)
      printf("%d ", i);
  }
}