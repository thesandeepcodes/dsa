# Checking if number is Prime

## $\sqrt{n}$ &nbsp; Method

```c++
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false; // skip even numbers

    for (int i = 5; i <= n/i; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}
```

- Time Complexity: O($\sqrt{n}$)

### Idea: If a number n is not prime, it must have a factor ≤ √n

Lets assume $$n = a \times b$$
Then $a$ and $b$ are integers less than and equal to n, i.e $1< a \leq b < n$

**Case**: If both $a$ and $b$ were greater than $\sqrt{n}$, then:

```
a > √n
b > √n
```

Multiplying them:

$a × b > √n × √n = n$

**_This is impossible, because a × b = n_**

**Case**: If any one is less than $\sqrt{n}$ then it must be factor of n

## (6k ± 1) Method

```c++
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
```

# Sieve of Eratosthenes

The Sieve of Eratosthenes is a simple, ancient algorithm that efficiently finds all primes up to n by repeatedly marking multiples of each prime as non-prime, starting from 2. This avoids redundant checks and quickly filters out all composite numbers

- **Create a List**: Write down all integers from 2 up to your desired limit (e.g., 100).

- **Start with 2**: Circle 2 (it's prime) and cross out all its multiples (4, 6, 8, 10, etc.).

- **Next Unmarked Number**: Find the next number not crossed out (which will be 3). Circle 3 and cross out its multiples (6, 9, 12, 15, etc.).

- **Repeat**: Continue this process with the next unmarked number (5, then 7, etc.).

- **Stop Condition**: You only need to continue this process until the prime number you are using is greater than the square root of your limit.

- **Result**: All the numbers that remain uncrossed are the prime numbers.

```c++
vector<int> getPrimes(int N) {
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= N; i++) {
        if (isPrime[i])
            primes.push_back(i);
    }

    return primes;
}

```
