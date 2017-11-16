// Algorytm wyznaczający rozkład danej liczy na czynniki pierwsze
// by Mateusz Chojnowski
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Wyznaczanie liczb pierwszych
int * tab_pier(int len){
  int lp, j=1, n, pn;
  static int * t;
  t = (int*)malloc(len * sizeof(int));
  *t = 2;
  j = 1;
  n = 3;
  while(j<len){
    lp=0;
    pn = (int) sqrtf((float) n);
    for(int k=0; *(t+k)<=pn; k++){
      if (n%*(t+k)==0){
        lp=1;
        break;
        }
    }
    if (lp == 0){
      *(t+j) = n;
      j++;}
    n+=2;
  }
  // for (int i=0; i<len; i++)
    // printf("%i: %i\n", i+1, *(t+i));
  return t;
}


int main(int argc, char const *argv[]) {
  int n, i=0, j=0;
  int *tab;
  int result[1000] = {0};
  printf("Podaj liczbe do rozkladu: ");
  scanf("%i", &n);
  tab = tab_pier(n);

  while (n!=1){
    if (n%*(tab+i) == 0){
      n/=*(tab+i);
      result[j] = *(tab+i);
      j++;
    }
    else
      i++;
  }
  j=0;
  while (result[j] != 0){
    printf("%i\n", result[j]);
    j++;
  }
  return 0;
}

// TODO: Zmniejszenie zakresu generowanych liczb pierwszych, aby nie przekraczał wartościa, liczby której podzielników szukamy
// TODO: Zastosowanie linked list 'result' zamiast array
