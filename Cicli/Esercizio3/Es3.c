/*Dati in input due numeri interi n e y entrambi > 0, 
stampare a video quante cifre di n sono divisori di y. 
Esempio se n=156 e y=48 l’output sarà 2 (le cifre 1 e 6 
di n sono divisori di 48).*/

#include <stdio.h>

int main(){
  int n, cifra, y, intNum, divisori = 0;

  printf("Inserire n:\n");
  scanf("%d", &n);

  printf("Inserire y:\n");
  scanf("%d", &y);
  
  intNum = n;

  if (n <= 0 || y <= 0){
    printf("Errore. n e y devono essere entrambi maggiori di 0.\n");
  }
    else{
      while (n != 0){
        cifra = n % 10;
        if(y % cifra == 0)
          divisori++;
        else
          divisori = divisori;

        n = n / 10;
      }
      printf("Il numero %d contiene %d divisori per %d.\n", intNum, divisori, y);
    }
}
