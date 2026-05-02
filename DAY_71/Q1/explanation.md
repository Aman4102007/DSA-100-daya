# Day 71 - Question 1 Solution

## 🎯 Problem
Hash Table Using Quadratic Probing

## 💡 Approach
Use an array of size m, probe with (key+i*i)%m until an empty slot or the key is found.

## ⏱️ Time Complexity
O(n) average, O(m) worst per operation

## 💾 Space Complexity
O(m)

