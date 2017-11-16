// by Mateusz Chojnowski
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Ulepszony program do wyszukiwania liczb pierwszych
int main(int argc, char const *argv[]) {
  int lp, j=1, n, pn, len =1000000;
  int t[len];
  t[0] = 2;
  j = 1;
  n = 3;
  while(j<len){
    lp=0;
    pn = (int) sqrtf((float) n);
    for(int k=0; t[k]<=pn; k++){
      if (n%t[k]==0){
        lp=1;
        break;
        }

    }
    if (lp == 0){
      t[j] = n;
      j++;}
    n+=2;
  }
  for (int i=0; i<len; i++)
    printf("%i: %i\n", i+1, t[i]);
  return 0;
}
