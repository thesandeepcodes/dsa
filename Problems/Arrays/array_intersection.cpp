#include <iostream>
#include <unordered_set>
using namespace std;

/**
 * Print Intersection for sorted arrays
 *
 * Example:
 *
 * int a[] = {1, 2, 3, 4, 5};
 * int b[] = {4, 5, 6, 7};
 * // Output: 4 5
 *
 */
void printSortedIntersection(int a[], int n, int b[], int m) {
  int i = 0, j = 0;

  while (i < n && j < m) {
    if (a[i] == b[j]) {
      cout << a[i] << " ";

      i++;
      j++;
    } else if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }
}

/**
 * Print Intersection of two arrays
 */
void printIntersection(int a[], int n, int b[], int m) {
  unordered_set<int> s;

  for (int i = 0; i < n; i++) {
    s.insert(a[i]);
  }

  for (int i = 0; i < m; i++) {
    if (s.find(b[i]) != s.end()) {
      cout << b[i] << " ";

      // erase to avoid duplicates
      s.erase(b[i]);
    }
  }
}

int main() {
  int size1 = 9, size2 = 7;
  int arr1[] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9};
  int arr2[] = {1, 2, 3, 4, 5, 9};

  printSortedIntersection(arr1, size1, arr2, size2);
  cout << endl;
  printIntersection(arr1, size1, arr2, size2);
}