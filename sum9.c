#include <stdio.h>
#include <math.h>

double calculateSeriesSum(double x, int n) {
    double sum = 1;  // start with the first term of the series
    double term = 1; // this is x^0 which is 1

    for (int i = 1; i <= n; i++) {
        term *= x; // compute x^i
        sum += term;
    }

    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double result = calculateSeriesSum(x, n);
    printf("Sum of the series 1 + x + x^2 + x^3 + ... up to %d terms is: %.6f\n", n, result);

    return 0;
}
