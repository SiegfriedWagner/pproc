// by Mateusz Chojnowski
#include <stdio.h>

// Algorytm euklidesa
int main(int argc, char const *argv[]) {
int n,m,c;
  printf("Podaj m: ");
  scanf("%i",&m );
  printf("\nPodaj n: ");
  scanf("%i",&n );

  do {
    printf("m=%i, n=%i\n", m,n);
    c=m%n;
    m=n;
    n=c;
  }
  while(c!=0);
  printf("NWP wynosi: %i\n", m);
  getchar()
  return 0;
}
