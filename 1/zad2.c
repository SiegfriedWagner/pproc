// by Mateusz Chojnowski

#include <stdio.h>
long long int fib (int n){
    if (n<=2) return 1;
    return fib(n-1)+fib(n-2);
}
// int main(){
//     int i, n;
//     printf("Ile liczb Fibonacciego mam policzyc? ");
//     scanf("%i", &i);
//     for (n=1; n<=i; n++){
//         printf("f(%i) = %lli \n", n, fib(n));
//     }
//     return 0;
//   }
int main(int argc, char const *argv[]) {
   long long int n1=1, n2=1, n3;
   int i = 1;
   while(i == 1) {
       printf("Ile liczb Fibonacciego mam policzyc? ");
       scanf("%i", &i);
       if (i<=0)
           printf("Podaj wlasciwa liczbe");
       else {
               printf("f(1) = 1\n");
           if (i >= 2) {
               printf("f(2) = 1\n");
               for (int j = 3; j <= i; j++) {
                   n3 = n1 + n2;
                   printf("f(%i) = %lli\n", j, n3);
                   n1 = n2;
                   n2 = n3;
               }
           }
       }
       printf("\nCzy chcesz uruchomic program praz jeszcez (1 - tak, cokolwiek innego - nie): ");
       scanf("%i", &i);
   }

  return 0;
}
