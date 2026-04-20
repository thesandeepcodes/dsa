#include <climits>
#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size) {
  int minIndex, maxIndex = 0;
  int min = INT_MAX;
  int max = INT_MIN;

  for (int i = 0; i < size; i++) {
    if (arr[i] < min) {
      minIndex = i;
      min = arr[i];
    }

    if (arr[i] > max) {
      maxIndex = i;
      max = arr[i];
    }
  }

  arr[minIndex] = max;
  arr[maxIndex] = min;
}

int main() {
  int arr[] = {2, 1, 3, 4, 5, 6, 7, 10};
  int size = 8;

  swapMinMax(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}