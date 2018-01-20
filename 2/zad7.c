/*
Program zamienia podaną liczbę rzymską na liczbę dziesiętną.
by Mateusz Chojnowski
*/
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int last_value=1001, value, sum=0, i=0;
  char letter[100];
    printf("Podaj liczbę rzymską\n");
    scanf("%s", &letter);
    do{
      // printf("%c = %d\n", letter[i], letter[i]);
      switch (letter[i]) {
        case 77:
          value = 1000;
          break;
        case 68:
          value = 500;
          break;
        case 67:
          value = 100;
          break;
        case 76:
          value  = 50;
          break;
        case 88:
          value = 10;
          break;
        case 86:
          value = 5;
          break;
        case 73:
          value = 1;
          break;
        printf("Wrong symbol\n");
        exit(1);
      }
      if (value > last_value)
        sum-=2*last_value;
      sum+=value;
      last_value=value;
      i++;
    }
    while ( letter[i] != '\0');
  printf("%s w zapisie dziesiętnym = %d \n", letter, sum);
  return 0;
}
