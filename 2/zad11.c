/* Program pobiera plik wejściowy, a następnie szyfruje zawartość przy pomocy szyfru Cezara i zapisuje do pliku wyjściowego */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  FILE *file_read=fopen("zad11_in.txt", "r");
  FILE *file_write=fopen("zad11_out.txt", "w");
  char c;
  int key;

  printf("Podaj klucz szyfrujący %i\n", key);
  scanf("%i", &key);
  c = fgetc(file_read);

  while (c!=EOF){
    if (isalpha(c)){
      if (islower(c))
        c=(c-'a'+key)%26+'a';
      else
        c=(c-'A'+key)%26+'A';
    }
    fputc(c, file_write);
    c=fgetc(file_read);
    }

  fclose(file_read);
  fclose(file_write);
  return 0;
}
