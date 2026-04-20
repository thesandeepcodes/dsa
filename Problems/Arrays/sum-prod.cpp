#include <iostream>
using namespace std;

int sum(int nums[], int size) {
  int total = 0;

  for (int i = 0; i < size; i++) {
    total += nums[i];
  }

  return total;
}

int prod(int nums[], int size) {
  if (size == 0) return 0;

  int product = 1;
  for (int i = 0; i < size; i++) {
    product *= nums[i];
  }

  return product;
}

int main() {
  int odd[] = {1, 3, 5, 7, 9, 11};
  int size = 6;

  int oddSum = sum(odd, size);
  int oddProd = prod(odd, size);

  cout << "Sum: " << oddSum << endl;
  cout << "Product: " << oddProd << endl;
}