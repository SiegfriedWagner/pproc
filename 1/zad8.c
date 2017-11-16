// by Mateusz Chojnowski
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double a, b, c, delta;
  do{
    printf("Podaj a ");
    scanf("%lf",&a  );
    printf("Podaj b ");
    scanf("%lf",&b);
    printf("Podaj c ");
    scanf("%lf",&c);
    delta = pow(b,2.0) - 4.0*a*c;
    if (delta < 0)
      printf("\nRównanie nie ma miejsc zerowych");
    else if (delta == 0)
      printf("\nRównanie ma jedno miejsce zerowe, x0 = %lf", -1.0*(b/(2*a)));
    else{
      delta = sqrt(delta);
      printf("\nRównanie ma dwa miejsca zerowe x1 = %lf i x2 = %lf", (-b-delta)/(2.0*a), (-b+delta)/(2.0*a));
    }
    printf("\nWpisz 0 aby kontynuowac");
    scanf("%lf", &delta);
  }
  while (delta == 0);
  return 0;
}
