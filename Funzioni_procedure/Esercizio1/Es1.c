//Scrivere un programma per calcolare il coefficiente binomiale.

#include <stdio.h>

void binomiale(int, int);

int main(){
  int n;
  int k;

  printf("Inserisci un numero:\n");
  scanf("%d", &n);

  printf("Inserisci un valore per k:\n");
  scanf("%d", &k);

  binomiale(n, k);
}

void binomiale(int numero, int k){
  int num;
  int den;
  num = 1;
  den = 1;
  for(int i = 1; i <= k; i++){
    num *= numero - (i - 1);
    den *= i;
  }
  printf("Il coefficiente binomiale è: %d\n", num / den);
}
