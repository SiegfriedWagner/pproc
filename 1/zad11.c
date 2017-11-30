/*
 Obliczanie pierwiastków za pomocą metody połowienia przediałów
Założenie metody - funkcja jest ciągła
1. F(a) i F(b) maja mieć rózne znaki - F(a)*F(b)<0.
2. Wybór punktu dokładanie w połowie przedziału.
3. Sprawdź jaki znak ma nowo otrzymany punkt.
4. Przypisz argumentowi, który ma ten sam znak co nowy argument wartość nowego argumentu.
5. Powtarzaj do uzyskania satysfakcjonującego epsilona.
*/

#include <math.h>
#include <stdio.h>
double function (double x);

int main(int argc, char const *argv[]) {
  double arga, argb, vala, valb, epsilon, argx, valx;
  printf("Podaj [poczatek przedzialu] [koniec przedzialu] [epislon]\n");
  scanf("%lf %lf %lf", &arga, &argb, &epsilon);
  while (fabs(arga-argb) > epsilon){
    argx = (arga+argb)/2;
    valx = function(argx);
    if (valx == 0)
      break;
    valb = function(argb);
    vala = function(arga);
    if (valx*vala < 0){
      argb = argx;
    }
    else
      arga=argx;
  }
  if (fabs(valx) > 0.1)
    printf("Uwaga, wartość nie zbliżyła się do 0 i wynosi f(%lf) = %lf\n", argx, valx);
  printf("Miejsce zerowe znajduje się w x = %lf", argx);
  // printf("%lf %lf %lf\n", arga, argb, epsilon);
  return 0;
}

double function (double x){
  double result;
  // curve formula
  result = x - 30;
  // result = pow(x,2);
  return result;
}
