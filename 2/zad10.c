/* Program czyta plik, a następnie zwraca w drugim pliku procentową częstość liter występujących w tekście */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  FILE *file_read=fopen("zad10_in.txt", "r");
  FILE *file_write=fopen("zad10_out.txt", "w");
  char c;
  int sum[26]={0}, char_count=0;
    c=fgetc(file_read);
    while (c!=EOF){
      if (isalpha(c)){
        c=toupper(c);
        sum[c-'A']++;
        char_count++;
      }
      c = fgetc(file_read);
    }
    fprintf(file_write, "Procentowa częstość liter\n\n");
    for (int i=0; i<26; i++){
      fprintf(file_write, "%c: %6.3f\n", 'A'+i, (float)sum[i]/char_count*100);
    }

  fclose(file_read);
  fclose(file_write);
  return 0;
}
