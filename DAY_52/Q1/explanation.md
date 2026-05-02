# Day 52 - Question 1 Solution

## 🎯 Problem
LCA in Binary Tree

## 💡 Approach
Find indices of the two values in the level‑order array, then repeatedly move the deeper index up by dividing by 2 until both indices match; the value at that index is the LCA.

## ⏱️ Time Complexity
O(n)

## 💾 Space Complexity
O(1)

