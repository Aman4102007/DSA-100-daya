// Day 35 - Question 1
// Problem: Queue Using Array

#include <stdio.h>

int main(){
    int n,i; // number of elements
    if(scanf("%d",&n)!=1) return 0;
    int arr[100]; // store elements
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i<n-1) printf(" ");
    }
    return 0;
}
