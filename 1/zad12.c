//sprawdzic dlaczego nie dziala

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  int n, rp, sum=0, iterator=0;
  printf("Podaj zakres dla p,q i r\n");
  scanf("%i", &n);
  for (int p=1; p<=n; p++){
    for (int q=p+1; q<=n; q++){
      rp = (int) sqrt(q*q + p*p);
      for (int r=rp; r<=rp+1; r++){
        if (r<=n){
          if (p*p+q*q==r*r) {
            printf("%i^2 + %i^2 = %i^2\n",p,q,r);
            sum++;
          }
        }
        iterator++;
      }
    }
  }
  printf("Jest %i takich trójek\n", sum);
  printf("Liczba iteracji: %i\n", iterator);
  return 0;
}
