# Linear Search

Linear search is the simplest way to find a value in a list. It checks each element one by one until it finds the target or reaches the end.

## How It Works

- Start from the first element (index 0)
- Compare it with the target value
- If it matches → return the index
- If not → move to the next element
- If you reach the end and don’t find it → return -1

---

### Example

```cpp
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}
```

---

# Two Pointer Approach

The two-pointer technique uses two indices (pointers) to solve problems efficiently, usually from opposite ends of the array.

It is commonly used for:

- Reversing arrays
- Finding pairs in sorted arrays
- Removing duplicates

## How It Works

- Start one pointer at the beginning (`start = 0`)
- Start another pointer at the end (`end = size - 1`)
- Move them based on the problem condition (reversing array, finding pair, ...)

---

### Example: Reverse an Array

We swap elements from both ends and move inward.

### Steps

- Set `start = 0`, `end = size - 1`
- Swap `arr[start]` and `arr[end]`
- Move `start++` and `end--`
- Repeat until `start < end`

> We stop when:
>
> - `start > end` (for even-sized arrays), or
> - `start == end` (for odd-sized arrays)

---

### Iterations

**1st iteration**

```
             ↓
[1, 2, 3, 4, 5]
 ↑
```

**2nd iteration**

```
          ↓
[1, 2, 3, 4, 5]
    ↑
```

**3rd iteration**

```
       ↓
[1, 2, 3, 4, 5]
       ↑
```

---

### Even-size case

(Here, the `start` pointer crosses the `end` pointer)

```
    ↓
[1, 2, 3, 4]
       ↑
```

---

### Example

```cpp
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}
```

### Example

Input:

```
[1, 2, 3, 4, 5]
```

Steps:

- Swap 1 and 5 → [5, 2, 3, 4, 1]
- Swap 2 and 4 → [5, 4, 3, 2, 1]

Output:

```
[5, 4, 3, 2, 1]
```
