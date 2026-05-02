# Day 59 - Question 2 Solution

## 🎯 Problem
Construct Binary Tree from Inorder and Postorder Traversal

## 💡 Approach
Recursively pick last postorder element as root, split inorder at that value, and recurse on left/right subtrees.

## ⏱️ Time Complexity
O(n^2)

## 💾 Space Complexity
O(n)

