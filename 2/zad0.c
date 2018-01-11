#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  int p;
  for (int c;c<256;c++){
    if (!isgraph(c) && (c<128))
      p=32;
    else
      p=c;
  printf("%d %c\n",c ,p );
  }
  return 0;
}
