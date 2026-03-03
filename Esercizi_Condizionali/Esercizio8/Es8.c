//Scrivere un programma C che acquisito un numero intero visualizza il messaggio "Positivo", "Negativo" o "Nullo" in base al valore.

#include <stdio.h>

int main(){
    int val;

    printf("Inserisci il valore:\n");
    scanf("%d", &val);

    if(val > 0)
        printf("Positivo\n");
    else if(val < 0)
        printf("Negativo\n");
    else
        printf("Nullo\n");
}