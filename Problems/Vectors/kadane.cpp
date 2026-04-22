#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int kadane(vector<int>& arr) {
  int currSum = 0, maxSum = INT_MIN;

  for (int i = 0; i < arr.size(); i++) {
    currSum += arr[i];

    maxSum = max(currSum, maxSum);

    if (currSum < 0) {
      currSum = 0;
    }
  }

  return maxSum;
}

int main() {
  vector<int> arr = {8, -8, 2, 3, -6, 7, 8};

  int maxSubarraySum = kadane(arr);

  cout << maxSubarraySum << endl;
}