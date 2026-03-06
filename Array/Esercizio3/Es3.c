//Dati due array inseriti da tastiera, dire se uno è la permutazione dell'altro.

#include <stdio.h>
#define N 5

int main(){
  int array1[N];
  int array2[N];
  int flag, counter1, counter2;

  printf("Inserisci i valori del primo array:\n");
  for (int i = 0; i < N; i++){
    scanf("%d", &array1[i]);
  }

  printf("Inserisci i valori del secondo array:\n");
  for (int j = 0; j < N; j++){
    scanf("%d", &array2[j]);
  }

  printf("Array 1: ");
  for (int i = 0; i < N; i++){
    printf("%d ", array1[i]);
  }
  printf("\n");

  printf("Array 2: ");
  for (int j = 0; j < N; j++){
    printf("%d ", array2[j]);
  }

  flag = 1;
  for (int i = 0; i < N && flag; i++){
    counter1 = 0;
    counter2 = 0;
    for(int j = 0; j < N; j++){
      if(array1[j] == array1[i])
        counter1++;
    }
    for (int j = 0; j < N; j++){
      if (array2[j] == array2[i])
        counter2++;
    }
    if(counter1 != counter2)
      flag = 0;
  }

  printf("\n%d", flag);
  
}