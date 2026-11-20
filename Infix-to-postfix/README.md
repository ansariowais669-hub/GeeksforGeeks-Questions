# Infix to Postfix

## Problem Statement

You are given a string `s` representing an infix expression. Convert this infix expression to a postfix expression.

- **Infix Expression:** An expression in which operators are placed between operands, such as `a + b`.
- **Postfix Expression:** An expression in which operators are placed after operands, such as `ab+`.

The precedence order of operators is as follows:

1. `^` has the highest precedence and is evaluated from right to left.
2. `*` and `/` have the next highest precedence and are evaluated from left to right.
3. `+` and `-` have the lowest precedence and are evaluated from left to right.

## Examples

**Example 1:**

**Input:**
```text
s = "a*(b+c)/d"
```

**Output:**
```text
abc+*d/
```

**Explanation:**

First, `b+c` becomes `bc+`. Then, multiply `a` with the result to get `abc+*`. Finally, divide the result by `d` to get `abc+*d/`.

**Example 2:**

**Input:**
```text
s = "a+b*c+d"
```

**Output:**
```text
abc*+d+
```

**Explanation:**

First, `b*c` becomes `bc*`. Then, add `a` to get `abc*+`. Finally, add `d` to get `abc*+d+`.

**Example 3:**

**Input:**
```text
s = "(a+b)*(c+d)"
```

**Output:**
```text
ab+cd+*
```

**Explanation:**

First, `(a+b)` becomes `ab+`, and `(c+d)` becomes `cd+`. Finally, multiply both results to get `ab+cd+*`.

## Constraints

- `1 ≤ s.length ≤ 5 * 10³`
- `s[i]` can be an operand (`a-z`, `A-Z`, `0-9`), an operator (`+`, `-`, `*`, `/`, `^`), or a parenthesis (`(`, `)`).
