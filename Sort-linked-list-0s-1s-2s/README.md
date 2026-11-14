# Sort Linked List of 0s, 1s and 2s

**Difficulty:** Medium

## Problem Statement

Given a linked list where each node contains either `0`, `1`, or `2`, rearrange the list such that all nodes containing `0` appear first, followed by all nodes containing `1`, and finally all nodes containing `2`.

The relative order of nodes within each group should be maintained.

## Examples

**Example 1:**

**Input:**
```text
head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
```

**Output:**
```text
0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
```

**Explanation:**

All nodes containing `0` are placed at the beginning, followed by nodes containing `1`, and then nodes containing `2`.

**Example 2:**

**Input:**
```text
head = 2 → 2 → 0 → 1
```

**Output:**
```text
0 → 1 → 2 → 2
```

**Explanation:**

The nodes are rearranged according to their values, with all `0`s first, followed by `1`s and then `2`s.

## Constraints

- \(1 \leq \text{size of linked list} \leq 10^6\)
- \(0 \leq \text{Node.data} \leq 2\)
