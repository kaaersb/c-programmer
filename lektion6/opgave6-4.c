#include <stdio.h>


double multi_apply(double (*f) (double), int n, double s) {

    double result = s;
    for(int i = 0; i < n; i++) {
        result = f(result);
    }

    return result;
}

double half(double x) {
    return x/2;
}

int main(void) {
    
    double result = multi_apply(half, 4, 16.0);
    printf("%.2f", result);
    return 0;
}