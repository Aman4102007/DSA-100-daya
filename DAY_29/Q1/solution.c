// Day 29 - Question 1
// Problem: Rotate Linked List Right by k Places

#include <stdio.h>
int main(){
    int n,k,i;
    if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);
    if(n==0){return 0;}
    k%=n; // effective rotations
    int start = n-k; // index of new head
    for(i=0;i<n;i++){
        int idx = (start + i)%n;
        printf("%d", arr[idx]);
        if(i!=n-1) printf(" ");
    }
    return 0;
}
