# Mini-Max Sum

## Problem

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.

Print the minimum sum followed by the maximum sum.

## Example

Input:
```
1 2 3 4 5
```

Output:
```
10 14
```

## Approach

1. Find the total sum of all five numbers.
2. Find the minimum element.
3. Find the maximum element.
4. Minimum Sum = Total Sum − Maximum Element.
5. Maximum Sum = Total Sum − Minimum Element.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Language

C++

## Status

✔ Solved on HackerRank
