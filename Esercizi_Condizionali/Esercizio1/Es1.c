//Scrivere un programma C che chiede in ingresso due numeri a e b e verifica se a è multiplo di b o viceversa e stampa un opportuno messaggio a video.

#include <stdio.h>

int main(){
    int a, b;
    
    printf("Inserisci 2 numeri:\n");
    scanf("%d %d", &a, &b);
    if (a % b == 0){
        printf("b è multiplo di a.\n");
    }else if (b % a == 0){
        printf("a è mulitiplo di b.\n");
    }
    else{
        printf("a e b non sono multipli fra di loro.\n");
    }
}