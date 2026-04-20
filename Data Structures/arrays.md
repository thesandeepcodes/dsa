# Arrays

An array is a collection of elements of the **same data type** stored in **contiguous memory locations**.

It is used when you want to store multiple values in a single variable.

---

## Declaration

```cpp
int arr[5];
```

- `int` → data type
- `arr` → array name
- `5` → size of the array

---

## Initialization

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

Or:

```cpp
int arr[] = {1, 2, 3}; // size automatically becomes 3
```

---

## Accessing Elements

Array elements are accessed using **indexing**.

```cpp
cout << arr[0]; // first element
cout << arr[2]; // third element
```

- Index always starts from **0**
- Last index = `size - 1`

---

## Updating Elements

```cpp
arr[1] = 10; // change second element
```

---

## Traversing an Array

### Using loop

```cpp
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
```

---

## Taking Input

```cpp
int arr[5];

for (int i = 0; i < 5; i++) {
    cin >> arr[i];
}
```

---

## Output

```cpp
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
```

---

## Important Points

- Array size is **fixed** (cannot change after declaration)
- Elements are stored in **continuous memory**
- Accessing elements is **fast (O(1))**
- If you access an invalid index → **undefined behavior**

---

## Example Program

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // print elements
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```
