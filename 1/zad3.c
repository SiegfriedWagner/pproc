// by Mateusz Chojnowski
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x, sum, counter, positive, max, min;
  do {
      sum=0;
      counter=0;
      positive=0;
      max=0;
      while (1) {
        printf("Podaj liczbe ");
        scanf("%i", &x);
        if (x == 0) break;
        sum += x;
        counter++;
        if (x > 0)
        positive++;
        if (x > max)
        max = x;
        if (counter==1)
        min = max;
        if (x < min)
        min = x;
      }
      printf("Srednia wynosi: %f\n Ilość liczb: %i\n Max: %i \n Min: %i \nCzy chcesz kontynuowac(1 - tak, cokolwiek innego - nie): ", (float) sum/counter, positive, max, min);
      scanf("%i", &x);
  }
  while (x == 1);
  return 0;
  }
