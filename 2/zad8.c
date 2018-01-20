/* Program czyta znaki z konsoli i zapisuje do pliku*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE *write=fopen("zad8_out.txt", "w");
  char c;
    c=fgetc(stdin);
    while (c!='*'){
      fputc(c,write);
      printf("%c", c);
      c = fgetc(stdin);
    }
    printf("\n");

  fclose(write);
  return 0;
}
