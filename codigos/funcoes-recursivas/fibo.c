#include <stdio.c>

unsigned int fib(unsigned int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return fib(n-2) + fib(n-3);
}

int main() {
  return 0;
}
