#include <iostream>
using namespace std;

bool isPowerOfTwo(int num) {
  if (num <= 0) return false;
  return (num & (num - 1)) == 0;
}

int main() {
  cout << (isPowerOfTwo(9) ? "9 - Yes" : "9 - No") << endl;
  cout << (isPowerOfTwo(8) ? "8 - Yes" : "8 - No") << endl;
}