# Day 58 - Question 1 Solution

## 🎯 Problem
Build Tree from Inorder & Preorder

## 💡 Approach
Recursively use preorder to get root, split inorder at that root to get left/right sizes, recurse, and print in postorder.

## ⏱️ Time Complexity
O(n^2) worst case due to linear search for root in inorder

## 💾 Space Complexity
O(n) for recursion stack and arrays

