#include <stdio.h>

double min(double, double);

int main () {
    double mniejszy;
    mniejszy = min(8, 7);
    printf("Mniejsza liczba jest %f\n", mniejszy);
    return 0;
}

double min(double a, double b){
    if (a < b)
        return a;
    else
        return b;
}
