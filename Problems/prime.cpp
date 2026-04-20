#include <iostream>
#include <vector>
using namespace std;

void reverseArray(int arr[], int size) {
  int left = 0, right = size - 1;

  while (left < right) {
    swap(arr[left], arr[right]);

    left++;
    right--;
  }
}

bool isPrime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0) return false;

  for (int i = 5; i <= n / i; i += 2) {
    if (n % i == 0) return false;
  }

  return true;
}

vector<bool> sievePrimes(int limit) {
  vector<bool> isPrime(limit + 1, true);

  // Prime numbers are natural numbers
  // greater than 1 that have exactly two factors: 1 and itself.
  // i.e. 0 and 1 are not prime numbers.
  isPrime[0] = false;
  isPrime[1] = false;

  for (int num = 2; num * num <= limit; num++) {
    if (isPrime[num]) {
      for (int i = num * num; i <= limit; i += num) {
        isPrime[i] = false;
      }
    }
  }

  return isPrime;
}

vector<int> getPrimes(int limit) {
  vector<bool> isPrime = sievePrimes(limit);
  vector<int> primes;

  for (int i = 0; i < isPrime.size(); i++) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }

  return primes;
}

int main() {
  cout << (isPrime(12) ? "Prime" : "Non-Prime") << endl;

  cout << endl;
  cout << "Prime Numbers" << endl;

  for (int num : getPrimes(50)) {
    cout << num << endl;
  }
}