#include <iostream>
using namespace std;

int getNthFibonacci(int n) {
  if (n == 0 || n == 1) return n;

  int cur = 1;
  int prev = 0;
  for (int i = 2; i <= n; i++) {
    int prevSum = cur;

    cur += prev;
    prev = prevSum;
  }

  return cur;
}

// Print nth Fibonacci number
int main() {
  int fibonacci = getNthFibonacci(9);
  cout << fibonacci << endl;
}