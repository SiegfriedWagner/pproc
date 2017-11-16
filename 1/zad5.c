// by Mateusz Chojnowski
#include <stdio.h>
#include <stdlib.h>
//Sprawdzenie czy jest pierwsza lub ile ma pdodzielników i jakie one są
int main() {
  int n, counter=0;
  printf("Podaj n " );
  scanf("%i", &n );
  for (int i=n/2; i > 1; i--){
    if (n%i == 0){
      counter++;
      printf("%i\n", i);
    }
  }
  if (counter == 0)
    printf("\nLiczba %i jest pierwsza", n);
  else
    printf("\nliczba %i ma %i podzielniki", n, counter );
  scanf("%i", &n);
  return 0;
}
