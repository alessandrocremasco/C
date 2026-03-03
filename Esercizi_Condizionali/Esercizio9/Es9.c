/*Scrivere un programma in C che chiede all'utente i parametri a e 
b di un'equazione di primo grado ax+b = 0. L'algoritmo calcola e
visualizza la soluzione dell'equazione (si ricordi che l'equazione
può essere impossibile o indeterminata).*/

#include <stdio.h>

int main(){
  float a, b, res;

  printf("Inserisci i valori dell'equazione:\n");
  scanf("%f %f", &a, &b);

  if (a == 0 && b == 0)
    printf("Equazione indeterminata.\n");
  else if ((a == 0 && b != 0) || a != 0 && b == 0)
    printf("Equazione impossibile.\n");
  else{
    res = -b/a;
    printf("Il risultato dell'equazione è: %f\n", res);
  }
}