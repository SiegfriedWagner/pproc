// Uogólniona metoda herona
/* (n-1)*x/n+c/n*x^(n-1) = x */

#include <stdio.h>
#include <math.h>

double f(double x, double c, double n){
  return ((n-1)*x+c/pow(x,n-1))/n;
}

int main(int argc, char const *argv[]) {
  double a, x, m;
  int n;
  printf("Podaj liczbe a\n");
  scanf("%lf", &a);
  printf("Podaj liczbe iteracji\n");
  scanf("%d", &n);
  printf("Podaj stopień pierwiastka\n");
  scanf("%lf", &m);
  x=1;
  for (int i =1; i<=n; i++){
    x=f(x,a,m);
    printf("Iteracja %i, wartosc %lf\n", i, x  );
  }
  printf("Pierwiastek z %lf, stopnia %lf wynosi %3.20lf\n", a, m, x);
  //printf("Pierwiastek n apodstawie sqrt %lf\n", sqrt(a));
  return 0;
}
