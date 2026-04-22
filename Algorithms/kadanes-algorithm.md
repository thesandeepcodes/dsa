# Kadane's Algorithm (Maximum Subarray Sum)

## Idea

Find the **maximum sum of a contiguous subarray** in an array.

---

## Steps (Simple)

1. Initialize:
    - `current_sum = 0`
    - `max_sum = INT_MIN`

2. Traverse array:
    - Add element to `current_sum`
    - Update `max_sum = max(max_sum, current_sum)`

3. If `current_sum < 0`, reset it to `0`
4. Final `max_sum` is the answer

---

## Why it works

- Negative sum will **reduce future subarray sum**, so discard it.

---

## C++ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int>& arr) {
    int current_sum = 0;
    int max_sum = INT_MIN;

    for (int x : arr) {
        current_sum += x;
        max_sum = max(max_sum, current_sum);

        if (current_sum < 0)
            current_sum = 0;
    }

    return max_sum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << kadane(arr);
}
```

---

## Time Complexity

- **O(n)**

## Space Complexity

- **O(1)**

---

# All Possible Subarrays

## Definition

A **subarray** is a contiguous part of the array.

---

## Total Number of Subarrays

For array size `n`:

$$
\text{Total subarrays} = \frac{n(n+1)}{2}
$$

---

## Why?

### Method 1: Fix starting index

Think like this:

- For each index `i`, how many subarrays start from `i`?

If array size = `n`:

- From index `0` → can go till `n-1` → **n subarrays**
- From index `1` → **n-1 subarrays**
- From index `2` → **n-2 subarrays**
- ...
- From index `n-1` → **1 subarray**

So total:

[
n + (n-1) + (n-2) + \dots + 1
]

This is sum of first `n` natural numbers:

[
\frac{n(n+1)}{2}
]

---

### Method 2: Using pairs (start, end)

A subarray is defined by:

- Start index `i`
- End index `j` such that `i ≤ j`

So we count all valid `(i, j)` pairs.

For each `i`:

- `j` can be from `i → n-1`
- Total choices = `n - i`

So total:

$$
\sum_{i=0}^{n-1} (n - i)
$$

$$
= n + (n-1) + (n-2) + \dots + 1
= \frac{n(n+1)}{2}
$$

---

### Method 3 (Combinatorics intuition)

- There are `n+1` possible "cut points" around elements
  (before first, between elements, after last)
- Choose 2 cut points to form a subarray

$$
\binom{n+1}{2} = \frac{n(n+1)}{2}
$$

---

### 🔹 Small Example (n = 4)

Counts per start index:

- i = 0 → 4 subarrays
- i = 1 → 3
- i = 2 → 2
- i = 3 → 1

Total:

$$
4 + 3 + 2 + 1 = 10 = \frac{4 \cdot 5}{2}
$$

---

## Example (n = 3)

Array: `[1,2,3]`

Subarrays:

```
[1], [2], [3]
[1,2], [2,3]
[1,2,3]
```

Total = 6 = 3×4/2

---

## Print All Subarrays

```cpp
for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
        for (int k = i; k <= j; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
```

---

# Subarrays vs Subsequences

## Subarrays (Contiguous)

- Must be continuous
- Count =
    $$
    \frac{n(n+1)}{2}
    $$

---

## Subsequences (Non-contiguous)

- Can skip elements
- Count =
  $
  2^n
  $

---

## Key Difference

| Feature    | Subarrays  | Subsequences |
| ---------- | ---------- | ------------ |
| Contiguous | ✅ Yes     | ❌ No        |
| Count      | $n(n+1)/2$ | $2^n$        |
| Example    | [1,2]      | [1,3]        |

---

## Intuition

- Subarrays → choose **start & end**
- Subsequences → choose **include/exclude each element**
