// Day 22 - Question 1
// Problem: Count Nodes in Linked List

#include <stdio.h>
int main(){
    int n,i; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",arr[i]);
    }
    return 0;
}
