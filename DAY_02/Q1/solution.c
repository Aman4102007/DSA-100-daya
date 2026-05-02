// Day 2 - Question 1
// Problem: Delete an Element from an Array

#include <stdio.h>

int main(){
    int n, pos, i;
    if(scanf("%d", &n)!=1) return 0;
    int arr[100];
    for(i=0;i<n;i++) scanf("%d", &arr[i]);
    scanf("%d", &pos);
    pos--; // convert to 0‑based
    for(i=pos;i<n-1;i++) arr[i]=arr[i+1];
    for(i=0;i<n-1;i++){
        if(i) printf(" ");
        printf("%d", arr[i]);
    }
    return 0;
}
