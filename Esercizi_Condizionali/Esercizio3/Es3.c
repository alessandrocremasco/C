//Si scriva un programma che legga da input le lunghezze dei lati di un triangolo e determini se il triangolo è equilatero, isoscele o scaleno.

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digitare le lunghezze dei lati del triangolo:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c && a == c)
        printf("Il triangolo è equilatero.\n");
    else if((a == b && b != c) || (a == c && c != b) || (b == c && c != a) || c == b && b != a)
        printf("Il triangolo è isoscele.\n");
    else
        printf("Il triangolo è scaleno.\n"); 
}