//Scrivere un programma C che chiede all'utente un numero intero e ne visuializza il suo valore assoluto.

#include <stdio.h>

int main(){
    int val, ass;

    printf("Inserisci un numero intero:\n");
    scanf("%d", &val);

    if(val < 0){
        ass = -val;
    }else
    ass = val;

    printf("%d", ass);
}