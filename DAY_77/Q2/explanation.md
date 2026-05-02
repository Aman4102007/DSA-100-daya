# Day 77 - Question 2 Solution

## 🎯 Problem
Critical Connections in a Network

## 💡 Approach
Uses Tarjan’s algorithm to find bridges: DFS assigns discovery times and low links; an edge (u,v) is critical if low[v]>disc[u].

## ⏱️ Time Complexity
O(n+m)

## 💾 Space Complexity
O(n+m)

