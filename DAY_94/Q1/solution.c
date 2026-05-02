// Day 94 - Question 1
// Problem: Counting Sort Implementation

#include <stdio.h>

int main(){
    int n,i,x, max=0;
    if(scanf("%d", &n)!=1) return 0;
    int arr[100];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max) max=arr[i];
    }
    int freq[101]={0}; // assume values <=100
    for(i=0;i<n;i++) freq[arr[i]]++;
    for(i=1;i<=max;i++) freq[i]+=freq[i-1];
    int out[100];
    for(i=n-1;i>=0;i--){
        out[--freq[arr[i]]] = arr[i];
    }
    for(i=0;i<n;i++) printf("%d ", out[i]);
    return 0;
}
