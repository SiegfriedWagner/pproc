/* Program oczytuje zawartość pliku znak po znaku i wyświetla na konsoli */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE *read=fopen("zad9_in.txt", "r");
  char c;
    c=fgetc(read);
    while (c!=EOF){
      printf("%c", c);
      c = fgetc(read);
    }
    printf("\n");

  fclose(read);
  return 0;
}
