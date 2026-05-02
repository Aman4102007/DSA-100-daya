# Day 37 - Question 2 Solution

## 🎯 Problem
Kth Largest Element in a Stream

## 💡 Approach
Store all numbers in an array, append new value, sort descending each add, and return the k‑th element.

## ⏱️ Time Complexity
O(n^2) per add (due to sorting)

## 💾 Space Complexity
O(n)

