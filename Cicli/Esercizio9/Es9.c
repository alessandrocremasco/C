/*Scrivere un programma che chiede all’utente un numero intero n positivo e stampa a video
una tabella che ha in ogni posizione il prodotto tra l’indice di riga e di colonna (partire
dall’indice 1); ad esempio, se l’utente inserisce il numero 3 dovrà comparire a video la
seguente tabella
1 2 3
2 4 6
3 6 9*/

#include <stdio.h>

int main(){
  int n;

  printf("Inserisci un numero maggiore di 0:\n");
  scanf("%d", &n);

  while(n < 0){
    printf("Numero non valido. Riprova:\n");
    scanf("%d", &n);
  }

  printf("La tabella di %d è:\n", n);
  for (int i = 1; i < n+1; i++){
    for(int j = 1; j < n+1; j++){
      printf("%d ", i*j);
    }
    printf("\n");
  }
}