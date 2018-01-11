#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  float result[11] = {0};
  int dice1, dice2, liczba_rzutow = 10000;
  srand(time(NULL));
  for (int i=0; i<liczba_rzutow; i++){
    dice1=rand()%6;
    dice2=rand()%6;
    result[dice1+dice2]++;
    // result[rand()%6+rand()%6]++;
  }
  for (int i=0; i<11; i++){
    printf("Prawdopodobieństwo dla sumy=%2d wynosi %5.2f %%\n", i+2, result[i]/liczba_rzutow*100);
  }
return 0;
}
