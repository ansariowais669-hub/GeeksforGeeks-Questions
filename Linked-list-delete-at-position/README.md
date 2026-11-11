# Linked List Delete at Position

**Difficulty:** Easy

## Problem Statement

Given the **head** of a Singly Linked List and an integer **x**, delete the node at position **x** and return the updated head of the Linked List.

**Note:** Positions use **1-based indexing**.

## Examples

**Example 1:**

**Input:**
```text
x = 4
LinkedList = 1 -> 2 -> 3 -> 4 -> 5
```

**Output:**
```text
1 -> 2 -> 3 -> 5
```

**Explanation:** After deleting the node at the 4th position, the Linked List becomes 1 -> 2 -> 3 -> 5.

**Example 2:**

**Input:**
```text
x = 6
LinkedList = 2 -> 5 -> 7 -> 8 -> 99 -> 100
```

**Output:**
```text
2 -> 5 -> 7 -> 8 -> 99
```

**Explanation:** After deleting the node at the 6th position, the Linked List becomes 2 -> 5 -> 7 -> 8 -> 99.

## Constraints

- \(1 \leq \text{size of Linked List} \leq 10^5\)
- \(1 \leq x \leq \text{size of Linked List}\)
