// Day 3 - Question 2
// Problem: Missing number in array

#include <stdio.h>
int missingNumber(int arr[], int n){
    long long sum=0, exp=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    exp=(long long)(n+1)*(n+2)/2; // sum 1..n+1
    return (int)(exp-sum);
}