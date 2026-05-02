# Day 57 - Question 2 Solution

## 🎯 Problem
Flatten Binary Tree to Linked List

## 💡 Approach
Iteratively move left subtree to right, attaching original right subtree to the tail of the moved part, then proceed rightwards.

## ⏱️ Time Complexity
O(n^2) worst‑case (skewed tree), O(n) average

## 💾 Space Complexity
O(1)

