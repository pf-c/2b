#include <stdio.h>

int main() {
  int n, fact, sum = 0;

  printf("Enter the limit for the sum of series: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    fact = 1;
    for (int j = 1; j <= i; j++) {
      fact *= j;
    }
    sum += fact;
  }

  printf("The sum of the series is: %d\n", sum);

  return 0;
}