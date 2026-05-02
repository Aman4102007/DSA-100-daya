# Day 59 - Question 1 Solution

## 🎯 Problem
Build Tree from Inorder & Postorder

## 💡 Approach
Recursively use the last element of postorder as root, split inorder into left/right parts, and print nodes in preorder during recursion.

## ⏱️ Time Complexity
O(n^2) in worst case due to linear search for root in inorder

## 💾 Space Complexity
O(n) for recursion stack

