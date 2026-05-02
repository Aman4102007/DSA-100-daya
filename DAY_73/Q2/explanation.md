# Day 73 - Question 2 Solution

## 🎯 Problem
Redundant Connection

## 💡 Approach
Uses a Disjoint Set Union (DSU) approach to detect the first edge that connects two nodes already in the same component.

## ⏱️ Time Complexity
O(N^2) in worst case without path compression, but typically efficient for N=1000

## 💾 Space Complexity
O(N)

