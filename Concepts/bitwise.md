# Bitwise Operators

| Operation  | Formula            | Meaning            | Use Case      |
| ---------- | ------------------ | ------------------ | ------------- |
| AND `&`    | `x & y`            | 1 if both bits = 1 | Check bit     |
| OR `\|`    | `x \| y`           | 1 if any bit = 1   | Set bit       |
| XOR `^`    | `x ^ y`            | 1 if different     | Toggle        |
| NOT `~`    | `~x = -(x+1)`      | Flip bits          | Complement    |
| LEFT `<<`  | `x << n = x × 2^n` | Shift left         | Fast multiply |
| RIGHT `>>` | `x >> n = x / 2^n` | Shift right        | Fast divide   |

---

## Power of 2 Check

```cpp
(x > 0) && ((x & (x - 1)) == 0)
```

| Trick       | Meaning                   |
| ----------- | ------------------------- |
| `x & (x-1)` | removes lowest set bit    |
| result = 0  | only one bit → power of 2 |

## Data Type Modifiers

| Type        | Size | Range       | Use         |
| ----------- | ---- | ----------- | ----------- |
| `short`     | 2B   | small       | memory save |
| `int`       | 4B   | normal      | default     |
| `long long` | 8B   | very large  | most used   |
| `unsigned`  | same | `0 → 2^n-1` | no negative |

## One-Line Intuition

- `<<` → multiply by `2^n`
- `>>` → divide by `2^n`
- `&` → check
- `|` → set
- `^` → toggle
- `x & (x-1)` → power of 2
