/*Scrivere un programma che acquisisce un intero che rappresenta un
voto. Il programma prima verifica che il numero rappresenti un voto
valido (un intero tra 0 e 30 estremi inclusi). Se la condizione è
soddisfatta il programma stampa «grav. insuff.» se il voto è minore
10, «insuff.» se il voto è compreso tra 10 e 17 estremi inclusi,
«suff.» se è compreso tra 18 e 24 estremi inclusi, «ottimo» se
maggiore di 24. Altrimenti stampa un messaggio di errore.*/

#include <stdio.h>

int main(){
  
  int voto;

  printf("Inserisci un voto:\n");
  scanf("%d", &voto);

  if (voto < 0 || voto > 30)
    printf("Errore. Voto non valido.\n");
  else if (voto < 10)
    printf("grav. insuff.\n");
  else if (voto >= 10 && voto <= 17)
    printf("insuff.\n");
  else if (voto >= 18 && voto <= 24)
    printf("suff.\n");
  else if (voto > 24)
    printf("ottimo\n");
}
