#include <stdio.h>

double power(double base, int exponent) {
    int result = 1.0;
    int exp = exponent > 0 ? exponent : -exponent;

    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    if (exponent < 0) {
        return 1.0 / result;
    }
    
    return result;
}

int main() {
    double base;
    int exponent;
    
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    double result = power(base, exponent);
    printf("%.2lf ^ %d = %.5lf\n", base, exponent, result);
    
    return 0;
}















































