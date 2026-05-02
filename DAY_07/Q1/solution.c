// Day 7 - Question 1
// Problem: Recursive Fibonacci

#include <stdio.h>

int fib(int n){
    if(n==0) return 0;          // base case
    if(n==1) return 1;          // base case
    return fib(n-1)+fib(n-2);   // recursive step
}

int main(){
    int n;                      // input number
    if(scanf("%d",&n)!=1) return 0;
    printf("%d",fib(n));       // output result
    return 0;
}
