/*Scrivere un programma in C che chiede all'utente di inserire un numero intero che corrisponde ad un anno e visualizza
1 se l'anno è bisestile, altrimenti 0.

NOTA: Un anno è bisestile se è divisibile per 4 ma non per 100 o se è divisibile per 400.*/

#include <stdio.h>

int main(){
    int year;

    printf("Inserisci un anno:\n");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("L'anno è bisestile.\n");
    else
        printf("L'anno non è bisestile.\n");
}