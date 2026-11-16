# Delete All Occurrences in DLL

**Difficulty:** Medium

## Problem Statement

Given the head of a doubly linked list and an integer `x`, delete all occurrences of the given key `x` from the doubly linked list and return the new head of the modified list.

## Examples

**Example 1:**

```text
Input:
2 <-> 2 <-> 10 <-> 8 <-> 4 <-> 2 <-> 5 <-> 2
x = 2

Output:
10 <-> 8 <-> 4 <-> 5
```

**Explanation:** All occurrences of `2` have been deleted from the doubly linked list.

**Example 2:**

```text
Input:
9 <-> 1 <-> 3 <-> 4 <-> 5 <-> 1 <-> 8 <-> 4
x = 9

Output:
1 <-> 3 <-> 4 <-> 5 <-> 1 <-> 8 <-> 4
```

**Explanation:** The only occurrence of `9` was at the head of the list, so it is deleted.

## Constraints

- \(1 \leq \text{size of linked list} \leq 10^5\)
- \(0 \leq \text{Node.data} \leq 10^9\)

## Expected Complexity

- **Time Complexity:** \(O(n)\)
- **Auxiliary Space:** \(O(1)\)
