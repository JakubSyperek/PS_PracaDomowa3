#include <stdio.h>
#include <math.h>

double potega(int);

int main () {
    double h;
    h = potega(5);
    printf("Wynik: %f\n", h);
    return 0;
}

double potega(int n){
    int wynik;
    wynik = pow(2,n);
        return wynik;
}
