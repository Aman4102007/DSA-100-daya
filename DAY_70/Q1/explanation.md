# Day 70 - Question 1 Solution

## 🎯 Problem
Bellman-Ford Algorithm

## 💡 Approach
Relax all edges n-1 times; if any edge can still be relaxed after that a negative cycle exists. Distances are printed or "NEGATIVE CYCLE" if detected.

## ⏱️ Time Complexity
O(n*m)

## 💾 Space Complexity
O(n)

