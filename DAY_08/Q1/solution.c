// Day 8 - Question 1
// Problem: Compute Power Using Recursion

#include <stdio.h>

long long power(int a, int b){
    if(b==0) return 1;          // base case
    return a * power(a, b-1);   // recursive step
}

int main(){
    int a,b;
    if(scanf("%d %d", &a, &b)!=2) return 0;
    printf("%lld", power(a,b));
    return 0;
}
