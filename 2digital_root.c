// Find the digital root of a number
#include <stdio.h>

int digitalRoot(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The digital root of %d is %d\n", num, digitalRoot(num));

    return 0;
}
