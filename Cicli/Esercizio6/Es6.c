/*Scrivere un programma che chiede all’utente un numero intero positivo n (rifiuta eventuali
valori non corretti) e stampa a video la somma di tutti i natural compresi tra 0 e n incluso.*/

#include <stdio.h>

int main(){
  int n, somma = 0;

  printf("Inserisci un numero maggiore di 0:\n");
  scanf("%d", &n);

  while(n < 0){
    printf("Numero non valido. Riprova:\n");
    scanf("%d", &n);
  }

  for (int i = 0; i < n+1; i++){
    somma += i;
  }

  printf("La somma dei valori compresi tra 0 e %d è: %d.\n", n, somma);
}