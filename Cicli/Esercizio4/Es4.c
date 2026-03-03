/*Data una sequenza di numeri interi che termina con lo 0 
(sentinella), stampare a video quanti multipli di 5 o di 7
sono contenuti nella sequenza (attenzione, se un numero è 
multiplo sia di 5 che di 7 non deve essere contato 2 volte).*/

#include <stdio.h>

int main(){
  int numero, multipli = 0, multipli5 = 0, multipli7 = 0;

  printf("Inserisci la sequenza di numeri, terminando con la sentinella:\n");
  scanf("%d", &numero);

  while (numero != 0){
    if ((numero % 5 == 0) && (numero % 7 == 0)){
      multipli++;
    }
    else if (numero % 5 == 0){
      multipli5++;
    }
    else if (numero % 7 == 0){
      multipli7++;
    }
    else{
      multipli = multipli;
      multipli5 = multipli5;
      multipli7 = multipli7;
    }
    scanf("%d", &numero);
  }
  printf ("Multipli della sequenza: %d per 5, %d per 7 e %d per entrambi.\n", multipli5, multipli7, multipli);
}