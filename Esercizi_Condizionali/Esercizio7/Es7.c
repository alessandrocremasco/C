//Scrivere un programma C che acquisisce due numeri interi e stampa il maggiore dei due.

#include <stdio.h>

int main(){
    int a, b;

    printf("Inserisci i due numeri:\n");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("a maggiore di b.\n");
    else if (b > a)
        printf("b magigore di a.\n");
    else
        printf("a e b sono uguali.\n");
}