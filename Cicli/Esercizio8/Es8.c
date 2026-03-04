/*Scrivere un programma che legge una sequenza di caratteri di lunghezza a priori ignota (‘#’
per terminare) e conta quante vocali minuscole sono state inserite.*/

#include <stdio.h>

int main(){
  char carattere, minuscole = 0;

  printf("Inserisci caratteri:\n");

  do{
    scanf("%c", &carattere);
    if (carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u')
      minuscole++;
  }while (carattere != '#');

  printf("Nella sequenza ci sono %d vocali minuscole.\n", minuscole);
}