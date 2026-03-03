/*Dato un numero intero n > 0 letto da tastera, stampare 
a video quante cifre pari contene. Esempio, il numero 8 
ha 1 cifra pari, il numero 256 ha 2 cifre pari.*/

#include <stdio.h>

int main(){
  int n, cifra, pari = 0, numInt;

  printf("Inserisci un numero:\n");
  scanf("%d", &n);
  numInt = n;

  while(n != 0){
    cifra = n % 10;

    if (cifra== 0)
      pari = pari;
    else if (cifra % 2 == 0)
      pari++;
    else
      pari = pari;
    
    n = n / 10;
  }

  if(pari == 0)
    printf("%d non possiede nessuna cifra pari.\n", numInt);
  else
    printf("%d possiede %d cifre pari.\n", numInt, pari);
}