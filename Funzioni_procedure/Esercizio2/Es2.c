/*Scrivere una funzione che dati due numeri restituisce 1 se
il primo è multiplo del secondo, altrimenti 0.*/

#include <stdio.h>

int multipli(int, int);

int main(){
  int num1, num2;

  printf("Inserisci due numeri:\n");
  scanf("%d %d", &num1, &num2);

  multipli(num1, num2);

  printf("%d multiplo di %d: %d.\n", num1, num2, multipli(num1, num2));
}

int multipli(int n1, int n2){
  if(n1 % n2 == 0)
    return 1;
  else
    return 0;
}