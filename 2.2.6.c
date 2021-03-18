#include <stdio.h>
#include <math.h>

double potega(unsigned int, unsigned int);

int main () {
    double h;
    h = potega(2,2);
    printf("Wynik: %f\n", h);
    return 0;
}

double potega(unsigned int n, unsigned int m){
    int wynik;
    wynik = pow(n,m);
        return wynik;
}
