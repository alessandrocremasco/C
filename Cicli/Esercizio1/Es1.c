//Scrivere un programma che stampa la tavola pitagorica

#include <stdio.h>

int main(){
  int num, counter = 0, res;

  printf("Inserisci un numero:\n");
  scanf("%d", &num);

  printf("La tavola pitagorica di %d è:\n", num);
  printf("\n");
  
  while(counter < 11){
    res = num * counter;
    counter++;
    printf("%d ", res);
  }

}