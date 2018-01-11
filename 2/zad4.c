#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define mxd 10
#define mxv 214748364
#define mxp 7
#define mxn 8
/*
Program czyta liczby dodatnie i ujemne, sprawdza czy znajdują się
w zakeresie od -2147483648 do 2147483647, a następnie je wyświetla.
 */
int main(int argc, char const *argv[]) {
  int c, x, k, pw, last_digit, previous_value, sign=1, mxc=7;
  c = getchar();
  do {
    k = 0;
    x = 0;
    last_digit=9;
    if (c == '+') {
      c = getchar();
      sign = 1;
      mxc = mxp;
    }
    else if (c == '-'){
      c = getchar();
      sign = -1;
      mxc = mxn;
    }
    while (isdigit(c)){
      previous_value = x;
      last_digit = c-'0';
      x=x*10+c-'0';
      k++;
      printf("x=%d  k=%d  ld=%d pv=%d\n", x, k, last_digit, previous_value);
      c = getchar();
    }
    if(k<=10){
      if(((k==10) && (previous_value>mxv)) || ((previous_value==mxv) && (last_digit>mxc)))
        printf("Podałeś za dużą lub za małą liczbę\n");
      else
        printf("Podałeś liczbę %i\n", x*sign);
    }
    else
      printf("Podałeś za dużą lub za małą liczbę\n");
    c = getchar();
  }
  while(c!='0');
  return 0;
}
