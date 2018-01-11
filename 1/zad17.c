#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

void losowanie (int *tab);
int common_cells(int *tab1, int *tab2);

int main(int argc, char const *argv[]) {
  srand(time(NULL));

  int losowane[49]={0}, wygrane[49]={0}, liczba_losowan = 1000000, suma[7]={0};
  float wartosci_wygranych[7]={0.0, 0.0, 0.0, 25.0, 250.0, 6000.0, 10000000.0}, cena_kuponu=5.0, suma_wygranych=0;
  //printf("%d\n", &losowane);
  losowanie(&wygrane[0]);
  for (int i=0; i<liczba_losowan; i++){
    losowanie(&losowane[0]);
    suma[common_cells(&losowane[0], &wygrane[0])]++;
    memset(losowane, 0, 49*sizeof(int));
  }
  for (int i=0; i<7; i++){
    printf("Ilość %d = %i\n", i, suma[i]);
    suma_wygranych+=suma[i]*wartosci_wygranych[i];
  }
  printf("Zysk wynosi %f, sredni zysk na kuponie wynosi %f\n",suma_wygranych-liczba_losowan*cena_kuponu, (suma_wygranych-liczba_losowan*cena_kuponu)/liczba_losowan );
  return 0;
}


void losowanie (int *tab){
  // printf("Pointer in losowanie=%d\n", tab);
  int random, i=0;
  while(i<6){
    random = rand()%49;
    if (*(tab+random) == 0){
      *(tab+random) = 1;
      i++;
    }
  }
}

int common_cells (int *tab1, int *tab2){
  int sum=0;
  for (int i=0; i<49; i++)
    if (*(tab1+i) && *(tab2+i))
      sum++;
      // printf("Sum %d\n", sum);
  return sum;
}
