#include <stdio.h>

int checkPerfect(int num) {
  int sum = 0;
  for (int i = 1; i < num; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }
  return sum == num;
}

void printPerfectNumbers(int start, int end) {
  for (int i = start; i <= end; i++) {
    if (checkPerfect(i)) {
      printf("%d ", i);
    }
  }
}

int main() {
  int start, end;
  printf("Enter lower limit: ");
  scanf("%d", &start);
  printf("Enter upper limit: ");
  scanf("%d", &end);
  printf("All perfect numbers between %d and %d are: ", start, end);
  printPerfectNumbers(start, end);
  return 0;
}