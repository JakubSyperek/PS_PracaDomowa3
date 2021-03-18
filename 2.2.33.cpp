#include <iostream>
using namespace std;

double suma(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

int main () {
    double h;
    h = suma(2,3,4,5,6);
    printf("Wynik: %f\n", h);
    return 0;
}

double suma(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e){
    int wynik;
    wynik = a + b + c + d + e;
        return wynik;
}
