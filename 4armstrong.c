// 4. Find all Armstrong numbers between 0 and 999
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;

    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    printf("Armstrong numbers between 0 and 999:\n");
    for (int i = 0; i < 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
