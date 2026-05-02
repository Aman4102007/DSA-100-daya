# Day 70 - Question 2 Solution

## 🎯 Problem
Cheapest Flights Within K Stops

## 💡 Approach
Bellman–Ford style relaxation up to k+1 times, keeping previous distances to avoid using updated values in the same iteration.

## ⏱️ Time Complexity
O(k * E)

## 💾 Space Complexity
O(n)

