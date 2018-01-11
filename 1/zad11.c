/*
 Obliczanie pierwiastków za pomocą metody połowienia przediałów
Założenie metody - funkcja jest ciągła
1. F(a) i F(b) maja mieć rózne znaki - F(a)*F(b)<0.
2. Wybór punktu dokładanie w połowie przedziału.
3. Sprawdź jaki znak ma nowo otrzymany punkt.
4. Przypisz argumentowi, który ma ten sam znak co nowy argument wartość nowego argumentu.
5. Powtarzaj do uzyskania satysfakcjonującego epsilona.
*/
// by Mateusz Chojnowski
#include <math.h>
#include <stdio.h>
double function (double x);

int main(int argc, char const *argv[]) {
  double arga, argb, vala, valb, epsilon, argx, valx;
  int exit_value = 0;
  printf("Podaj [poczatek przedzialu] [koniec przedzialu] [epislon]\n");
  scanf("%lf %lf %lf", &arga, &argb, &epsilon);
  while (fabs(arga-argb) > epsilon){
    argx = (arga+argb)/2;
    valx = function(argx);
    if (valx == 0)
      break;
    valb = function(argb);
    vala = function(arga);
    if (valx*vala < 0)
      argb = argx;
    else if (valx*valb < 0)
      arga=argx;
    else{
      printf("Podano złe przedziały\n");
      exit_value = 1;
      break;
    }
  }
  if (exit_value == 0)
    printf("Miejsce zerowe znajduje się w x = %lf\n", argx);
  // printf("%lf %lf %lf\n", arga, argb, epsilon);
  return 0;
}

double function (double x){
  double result;
  // curve formula
  result = pow(x,2) - 30;
  // result = pow(x,2);
  return result;
}
