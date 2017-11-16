// by Mateusz Chojnowski
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int lp, j, n;
  int t[100];
  j = 0;
  n =2;
  while(j<100){
    lp=0;
    for(int k=2; k<=n/2;k++){
      if (n%k==0)
        lp++;
    }
    if (lp == 0){
      t[j] = n;
      j++;}
    n++;
  }
  for (int i=0; i<100; i++)
    printf("%i\n", t[i]);
  return 0;
}
