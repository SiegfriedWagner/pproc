#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[]) {
  double a, x;
  int n;
  printf("Podaj liczbe a\n");
  scanf("%lf", &a);
  printf("Podaj liczbe iteracji\n");
  scanf("%d", &n);
  x=1;
  for (int i =1; i<=n; i++){
    x=(x+a/x)/2;
    printf("Iteracja %i, wartosc %lf\n", i, x  );
  }
  printf("Pierwiastek z %lf wynosi %3.20lf\n", a, x);
  printf("Pierwiastek n apodstawie sqrt %lf\n", sqrt(a));
  return 0;
}
