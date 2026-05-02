// Day 8 - Question 2
// Problem: Power of Two

#include <stdbool.h>

bool isPowerOfTwo(int n){
    if(n<=0) return false; // non‑positive numbers are not powers of two
    while(n%2==0) n/=2;    // keep dividing by 2
    return n==1;           // true if reduced to 1
}