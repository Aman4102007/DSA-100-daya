# Day 67 - Question 2 Solution

## 🎯 Problem
Course Schedule II

## 💡 Approach
DFS based topological sort: build adjacency list, visit nodes marking states to detect cycles, push finished nodes onto result stack.

## ⏱️ Time Complexity
O(numCourses + prerequisitesSize)

## 💾 Space Complexity
O(numCourses + prerequisitesSize)

