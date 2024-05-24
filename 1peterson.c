#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int isPeterson(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPeterson(num))
        printf("%d is a Peterson number.\n", num);
    else
        printf("%d is not a Peterson number.\n", num);

    return 0;
}
