# Day 80 - Question 2 Solution

## 🎯 Problem
Find the City With the Smallest Number of Neighbors

## 💡 Approach
Use Floyd‑Warshall to compute all‑pairs shortest paths, then count reachable nodes within the threshold for each city and pick the largest index with minimal count.

## ⏱️ Time Complexity
O(n^3)

## 💾 Space Complexity
O(n^2)

