#include <stdio.h>
long long factorial(int n);
int main(void) {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  if (n < 0) {
    printf("Error. N must be non-negative.\n");
  } else {
    long long result;
    result = factorial(n);
    printf("Factorial = %lld\n", result);
  }
  return 0;
}
long long factorial(int n) {
  long long result = 1;
  for (int i = 1; i <= n; i++) {
    result = result * i;
  }
  return result;
}