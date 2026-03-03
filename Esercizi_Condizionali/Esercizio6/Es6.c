/*Scrivere un programma C che acquisisce i punteggi ottenuti da uno studente nelle prove dell'esame di indformatica e valuta
se lo studente è stato promosso o bocciato visualizzando un apposito messaggio.*/

#include <stdio.h>

int main(){

    int voto1, voto2, media;

    printf("Inserisci i voti dello studente:\n");

    scanf("%d %d", &voto1, &voto2);

    media = (voto1 + voto2)/2;

    if(media >= 18)
        printf("Studente promosso.\n");
    else
        printf("Studente bocciato.\n");
}

