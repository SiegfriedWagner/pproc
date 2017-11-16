// by Mateusz Chojnowski
#include <stdio.h>
int main() {
    int x, suma;
    do {
        suma=0;
        while (1) {
            printf("Podaj liczbe ");
            scanf("%i", &x);
            if (x == 0) break;
            suma += x;
        }
        printf("Suma wynosi %i\nCzy chcesz kontynuowac(1 - tak, cokolwiek innego - nie): ", suma);
        scanf("%i", &x);
    }
    while (x == 1);
    return 0;
}
