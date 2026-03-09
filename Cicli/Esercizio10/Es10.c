#include <stdio.h>

int main(){
  int n1;
  int n2;
  int mcd;
  int mcm;

  printf("Inserisci due numeri:\n");
  scanf("%d %d", &n1, &n2);

  if(n1 > n2){
    mcd = n2;
  }
  else
    mcd = n1;
  
  while(!(n1 % mcd == 0 && n2 % mcd == 0)){
    mcd = mcd - 1;
  }
  mcm = n1 * n2 / mcd;

  printf("mcd: %d\n", mcd);
  printf("mcm: %d\n", mcm);
}