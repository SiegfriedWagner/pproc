/*
Program czyta liczbę zmeinnoprzecinkową z klawiatury,
a następnie wyświetla 'przybliżenie'
by Mateusz Chojnowski
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int c, x, k=1, y, z;
  float w;
  do {
  c = getchar();
  x = 0;
  z = 1;
  y = 1;
  if ((c == '-')||(c == '+')){
    if (c == '-')
      z=-1;
    c=getchar();
  }
  while (isdigit(c)){ //może być także wartość -1
    x=x*10+c-'0';
    c=getchar();
  }
  if (c == '.')
  c = getchar();
  while (isdigit(c)){ //może być także wartość -1
    y=y*10+c-'0';
    c=getchar();
    k=k*10;
  }
  w = z*(x+(float)y/k);
  printf("Liczba = %f\n", w);
  k = getchar();
  }
  while(k!='0');
  return 0;
}
