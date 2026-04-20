#include <iostream>
using namespace std;

void printUniqueElems(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    bool isUnique = true;

    for (int j = 0; j < size; j++) {
      if (i != j && arr[i] == arr[j]) {
        isUnique = false;

        break;
      }
    }

    if (isUnique) {
      cout << arr[i] << " ";
    }
  }
}

int main() {
  int arr[] = {1, 3, 4, 5, 4, 3, 22, 12, 31, 1, 0, -1};
  int size = 12;

  printUniqueElems(arr, size);
}