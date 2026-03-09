/*Scrivendo sia una funzione che una procedura, determinare
quante cifre ha un numero.*/

#include <stdio.h>

int richiesta_n(int);
void stampa_cifre(int num);

int main(){
  int numero;

  int n = richiesta_n(numero);
  stampa_cifre(n);
}

int richiesta_n(int numero){
  int num;
  printf("Inserire un numero:\n");
  scanf("%d", &num);

  return num;
}

void stampa_cifre(int n){
  int cifre = 0;
  int ni = n;
  while (n != 0){
    n /= 10;
    cifre++;
  }

  printf("Il numero %d ha %d cifre.\n", ni, cifre);
}