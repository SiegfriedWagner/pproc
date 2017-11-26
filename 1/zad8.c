// by Mateusz Chojnowski
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double a, b, c, delta, x1, x2;
  do{
    printf("Podaj a ");
    scanf("%lf",&a  );
    printf("Podaj b ");
    scanf("%lf",&b);
    printf("Podaj c ");
    scanf("%lf",&c);
    delta = pow(b,2.0) - 4.0*a*c;
    if (delta < 0){
      printf("\nRównanie nie ma miejsc zerowych w zbiorze liczb rzeczywistych\n");
      delta = sqrt(-delta);
      printf("Równianie ma rozwiązanie w zbiorze liczb zespolonych: x1 =  (%lf - %lfi) i x2 = (%lf + %lfi)", -b/(2.0*a), delta/(2.0*a), -b/(2.0*a), delta/(2.0*a));
    }
    else if (delta == 0)
      printf("\nRównanie ma jedno miejsce zerowe, x0 = %lf", -1.0*(b/(2*a)));
    else{
      delta = sqrt(delta);
      //x1 = 2.0*c/(delta+b); // Usprawnienie pozwalające zmniejszyć błędy numeryczne
      x1 = (-b-delta)/(2.0*a);
      x2 = (-b+delta)/(2.0*a);
      printf("\nRównanie ma dwa miejsca zerowe x1 = %3.10lf i x2 = %3.10lf", x1, x2);
    }
    printf("\nWpisz 0 aby kontynuowac");
    scanf("%lf", &delta);
  }
  while (delta == 0);
  return 0;
}
