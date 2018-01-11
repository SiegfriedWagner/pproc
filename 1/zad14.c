#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

double funkcja (double a);
double losowa (){
  double c=pow(2,30) -1;
  double result = (rand()<<15)+rand();
  return result/c;
}
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int k, n;
  double x,y, pi;
  printf("%i\n",RAND_MAX );
  do {
    printf("Podaj liczbę kroków n=");
    scanf("%i", &n);
    int i=0;
    for (int l=0; l<n; l++){
      x=(double)rand()/RAND_MAX;
      y=(double)rand()/RAND_MAX;
      // printf("%lf,%lf, %lf\n",x,y,x*x+y*y );
      if (x*x+y*y<=1.0){
        i++;
        // printf("true\n" );
      }
    }
    // printf("i=%i,n=%i\n", i,n);
    pi =(double)i/n;
    printf("Nasz wynik=%lf, przewidywany wynik=%lf\n",pi, M_PI/4);
    printf("Czy jesszcze raz (liczba krokow) \n");
    scanf("%i", &n);
  }
  while (n!=0);
  return 0;
}

double funkcja (double a){

}
