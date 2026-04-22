# Vectors in C++

A **vector** is a dynamic array provided by the C++ Standard Library that can **grow and shrink in size automatically**.

Unlike arrays, vectors handle memory management internally.

---

## Declaration

```cpp
#include <vector>
using namespace std;

vector<int> v;
```

- `int` → data type
- `v` → vector name

---

## Initialization

```cpp
vector<int> v1 = {1, 2, 3, 4};

vector<int> v2(5);       // size 5, all values = 0
vector<int> v3(5, 10);   // size 5, all values = 10
```

---

## Accessing Elements

```cpp
cout << v[0];        // first element
cout << v.at(1);     // safer access (throws error if out of range)
cout << v.front();   // first element
cout << v.back();    // last element
```

---

## Adding Elements

```cpp
v.push_back(10);   // add at end
v.emplace_back(20); // faster (constructs in place)
```

### Diff between push_back and emplace_back

`emplace_back` appends an element by constructing it **in-place** directly within the container's memory.

**Key Difference:**

- **`push_back`**: Takes an object, then **copies or moves** it into the vector.
- **`emplace_back`**: Takes **constructor arguments** and builds the object inside the vector, avoiding temporary objects.

**Performance:** More efficient for complex objects; negligible difference for primitive types (`int`, `double`).

#### Code Example

```cpp
#include <vector>

struct Point {
    int x, y;
    Point(int a, int b) : x(a), y(b) {}
};

int main() {
    std::vector<Point> v;

    v.push_back(Point(1, 2)); // Creates temporary, then moves/copies
    v.emplace_back(3, 4);     // Constructs Point(3, 4) directly in-place
}
```

---

## Removing Elements

```cpp
v.pop_back();      // removes last element
```

---

## Traversing a Vector

### Using loop

```cpp
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

### Using range-based loop

```cpp
for (int x : v) {
    cout << x << " ";
}
```

### Using iterator

```cpp
for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
```

---

## Important Member Functions

### Capacity Functions

```cpp
v.size();       // number of elements
v.capacity();   // total allocated space
v.empty();      // check if empty
v.resize(n);    // change size
v.reserve(n);   // reserve capacity
v.shrink_to_fit(); // reduce capacity() to size().
```

---

### Modifiers

```cpp
v.push_back(x);
v.emplace_back(x);
v.pop_back();

v.insert(v.begin(), 100);     // insert at beginning
v.erase(v.begin());           // remove first element
v.clear();                    // remove all elements

v.assign(5, 10);              // fill with values
```

---

### Element Access

```cpp
v[i];
v.at(i);
v.front();
v.back();
v.data(); // pointer to underlying array
```

---

### Iterators

```
    Forward (normal iterators):

    begin                         end
      ↓                             ↓
     [1] → [2] → [3] → [4] → [5] →  []


Reverse (reverse iterators):

    []  ← [1] ← [2] ← [3] ← [4] ← [5]
     ↑                             ↑
   rend                          rbegin
```

```cpp
/**
 * Returns an iterator to the first element
 * prints first element
 */
v.begin();
auto it = v.begin();
cout << *it;

/**
 * Returns an iterator to one past the last element
 * Not a valid element (you cannot dereference it)
 * Used as a stop condition
 */
v.end();
for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
}

/**
 * Returns a reverse iterator to the last element
 * Traverses backward
 * Prints last element
 */
v.rbegin();
auto it = v.rbegin();
cout << *it;

/**
 * Returns a reverse iterator to one before the first element
 * Used as a stop condition for reverse traversal
 */
v.rend();
for (auto it = v.rbegin(); it != v.rend(); ++it) {
    cout << *it << " ";
}
```

---

## Static vs Dynamic Allocation

### Static Allocation (Array)

```cpp
int arr[5];
```

- Memory allocated at **compile time**
- Stored in **stack memory**
- Size is **fixed**
- Faster but less flexible

---

### Dynamic Allocation (Vector)

```cpp
vector<int> v;
```

- Memory allocated at **runtime**
- Stored in **heap memory**
- Size is **dynamic (resizable)**
- Slight overhead but flexible

---

## Stack vs Heap Memory

### Stack Memory

- Stores:
    - Local variables
    - Function calls

- Fast access
- Limited size
- Automatically managed

Example:

```cpp
int x = 10;
int arr[5];
```

---

### Heap Memory

- Used for **dynamic allocation**
- Managed manually (or by containers like vector)
- Larger memory
- Slightly slower than stack

Example:

```cpp
int* ptr = new int;
```

Vector internally uses **heap memory**.

---

## How Vector Works Internally

- Uses a **dynamic array**
- When capacity is full:
    - Allocates new memory (usually double)
    - Copies old elements
    - Deletes old memory

This is why:

- `push_back()` is **amortized O(1)**
- Sometimes it takes more time (during resizing)

---

## Important Points

- Dynamic size (auto resizing)
- Stored in **contiguous memory** (like arrays)
- Supports **random access (O(1))**
- Safer than arrays (`at()` method)
- Extra memory overhead due to capacity

---

## Example Program

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    v.push_back(4);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```
