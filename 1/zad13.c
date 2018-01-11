/* obliczyc przybliżenie liczby PI
https://pl.wikipedia.org/wiki/Pi
- metoda Bailey-Borwein-Plouffe (nie działa)
- metoda Leibnitza
- metoda Ramanuja
by Mateusz Chojnowski
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long double Leibnitz (long steps);
long double Ramanuja (long steps);
long double BBP (long steps);
long int silnia (int n);
int main(int argc, char const *argv[]) {
  long steps = 0;
  for (int i=0; i<argc; i++){
    //printf("%s\n", *(argv+i));
    if (strcmp(*(argv+i),"-n") == 0){
      steps = strtol(*(argv+i+1), NULL, 10);
      // printf("%lu\n", steps);
    }
    if ((strcmp(*(argv+i),"-f") == 0) && (steps != 0)){
      char const * f_name = *(argv+i+1);
      // printf("%s\n", f_name);
      long double value;
      if (strcmp(f_name, "Leibnitz") == 0)
          value = Leibnitz(steps);
      else if (strcmp(f_name, "Ramanuja") == 0)
          value = Ramanuja(steps);
      else if (strcmp(f_name, "BBP") == 0)
          value = BBP (steps);
      else
        exit;
      // printf("%Lf\n", value);
      printf("Wybrana metoda: %s\nIlość kroków: %ld\nWartość PI    %50.49Lf\nBłąd względny: %50.49Lf\n", f_name, steps, value, value-M_PI);
    }
  }
  return 0;
}

long double Leibnitz (long steps){
  printf("%lu\n", steps);
  long double PI=0;
  for (int n=0; n<steps; n++)
    PI+=pow(-1.0, n)/(2*n+1);
  return PI*4;
}

long double Ramanuja (long steps){
  long double value=0;
  for (int n=0; n<steps; n++)
    value+=(silnia(4*n)*(1103+26390*n))/(pow(silnia(n),4)*pow(396,4*n));
  return pow(value*(2*sqrt(2)/9801),-1);
}

long double BBP(long steps){ // Bailey_Borwein_Plouffe
  long double value=0;
  for (int n=0; n<steps; n++)
    value+=((4.0/(8*n+1)-2.0/(8*n+4)-1.0/(8*n+5)-1.0/(8*n+6))/pow(16,steps));
  return value;
}

long int silnia (int n){
  long int result = 1;
  for (int i=0; i<=n; n++)
    result*=result;
  return result;
}
