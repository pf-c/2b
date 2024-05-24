#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of the series: %.6f\n", sum);
    return 0;
}
