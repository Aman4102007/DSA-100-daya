# Day 74 - Question 1 Solution

## 🎯 Problem
Winner of an Election

## 💡 Approach
Count votes for each distinct name in two parallel arrays, then scan to find the maximum count, breaking ties by lexicographic order.

## ⏱️ Time Complexity
O(n^2) in worst case due to linear search for each vote (n≤100 in this simple solution).

## 💾 Space Complexity
O(m) where m is number of distinct names (≤100).

