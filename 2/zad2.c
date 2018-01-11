#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int c, x, k=0, z;
  do {
  c = getchar();
  x = 0;
  z = 1;
  if ((c == '-')||(c == '+')){
    if (c == '-')
      z=-1;
    c=getchar();
  }
  while (isdigit(c)){ //może być także wartość -1
    x=x*10+c-'0';
    c=getchar();
  }
  printf("Liczba = %d\n", x*z);
  k = getchar();
  }
  while(k!='0');
  return 0;
}
