#include <iostream>
using namespace std;

int linearSearch(int nums[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (nums[i] == target) return i;
  }

  return -1;
}

int main() {
  int nums[] = {1, 3, 7, 9, 13};
  int size = 5;

  int index = linearSearch(nums, size, 9);

  cout << index << endl;
}