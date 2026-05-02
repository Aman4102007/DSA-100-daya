// Day 26 - Question 1
// Problem: Doubly Linked List Insertion and Traversal

#include <stdio.h>

int main(){
    int n,i;
    if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i<n-1) printf(" ");
    }
    return 0;
}
