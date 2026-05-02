// Day 25 - Question 1
// Problem: Count Occurrences of an Element in Linked List

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0; // read number of nodes
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]); // read list elements
    int key; scanf("%d",&key); // key to count
    int cnt=0;
    for(int i=0;i<n;i++) if(arr[i]==key) cnt++; // count occurrences
    printf("%d",cnt); // output result
    return 0;
}
