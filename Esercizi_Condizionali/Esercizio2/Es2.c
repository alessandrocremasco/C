//Scrivere un programma che chiede all'utente due caratteri e verifica se sono uno il successivo dell'altro

#include <stdio.h>

int main(){
    char char1, char2;

    printf("Inserisci due caratteri:\n");
    scanf("%c %c", &char1, &char2);

    if (char2 == char1 + 1 )
        printf("%c e %c sono il sucessivo dell'altro.\n", char1, char2);
    else
        printf("%c e %c non sono il successivo dell'altro.\n", char1, char2 );
}