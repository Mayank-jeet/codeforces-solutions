# Codeforces Solutions

A collection of my Codeforces solutions written in **C++**.

This repository is maintained as a personal learning resource to strengthen my understanding of **Data Structures and Algorithms**, improve competitive programming skills, practice problem-solving patterns, and prepare for coding interviews and contests.

---

## Repository Structure

All solutions are stored in the root directory of the repository.

```text
codeforces-solutions/
│
├── 4A.Watermelon.cpp
├── 71A.Way_Too_Long_Words.cpp
├── 158A.Next_Round.cpp
├── 2267A.Turn_Into_a_Palindrome.cpp
│
└── README.md
```

Each file represents a solution to one Codeforces problem.

---

## Language Used

- C++

Most solutions use the following competitive programming header:

```cpp
#include <bits/stdc++.h>
using namespace std;
```

---

## File Naming Convention

Each solution follows the naming format:

```text
<contest-id><problem-letter>.<problem-title>.cpp
```

### Examples

```text
4A.Watermelon.cpp
71A.Way_Too_Long_Words.cpp
158A.Next_Round.cpp
2267A.Turn_Into_a_Palindrome.cpp
```

### Naming Rules

- The first part represents the Codeforces problem ID.
- Problem titles use underscores (`_`) instead of spaces.
- Every solution is saved as a `.cpp` file.
- The filename is based on the Codeforces problem URL.

For example:

```text
[https://codeforces.com/problemset/problem/158/A](https://codeforces.com/problemset/problem/158/A)
```

is stored as:

```text
158A.Next_Round.cpp
```

---

## Code Format

Every solution generally follows this documentation format:

```cpp
/*
 * Platform: Codeforces
 * Problem: <contest-id><problem-letter> - <problem-title>
 * Link: <problem-link>
 * Time: <time-complexity>
 * Space: <space-complexity>
 */
```

### Example

```cpp
/*
 * Platform: Codeforces
 * Problem: 2267A - Turn Into a Palindrome
 * Link: [https://codeforces.com/problemset/problem/2267/A](https://codeforces.com/problemset/problem/2267/A)
 * Time: O(t * n), where t is the number of test cases
 *        and n is the length of the string
 * Space: O(n), for storing the input string
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        char targetChar;
        string s;

        cin >> n >> targetChar >> s;

        int cost = 0;

        for (int left = 0; left < n / 2; left++) {
            int right = n - 1 - left;

            if (s[left] == s[right]) {
                continue;
            }

            if (s[left] != targetChar) {
                cost++;
            }

            if (s[right] != targetChar) {
                cost++;
            }
        }

        cout << cost << '\n';
    }

    return 0;
}
```

---

## Topics and Problem-Solving Patterns

This repository includes solutions involving common competitive programming topics and patterns such as:

- Arrays
- Strings
- Sorting
- Searching
- Binary Search
- Two Pointers
- Sliding Window
- Prefix Sum
- Greedy Algorithms
- Mathematics
- Number Theory
- Bit Manipulation
- Recursion
- Backtracking
- Dynamic Programming
- Graph Algorithms
- Breadth-First Search (BFS)
- Depth-First Search (DFS)
- Trees
- Linked Lists
- Stacks
- Queues
- Deques
- Hashing
- Maps and Sets
- Constructive Algorithms
- Implementation Problems

More problems, topics, and optimized solutions will be added over time.

---

## Goals of This Repository

- Improve competitive programming skills.
- Practice Data Structures and Algorithms regularly.
- Build consistency through Codeforces contests and problem solving.
- Maintain a well-documented collection of solved problems.
- Track progress across different ratings and topics.
- Prepare for coding interviews and online assessments.
- Learn efficient C++ implementation techniques.

---

## Author

**Mayank Jeet**

- GitHub: [@Mayank-jeet](https://github.com/Mayank-jeet)
- LinkedIn: [Mayank Jeet](https://www.linkedin.com/in/mayank-jeet-211583364/)
