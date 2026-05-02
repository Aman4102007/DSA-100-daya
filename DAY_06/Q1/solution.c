// Day 6 - Question 1
// Problem: Remove Duplicates from Sorted Array

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int pos=0; // position for unique elements
    for(int i=0;i<n;i++){
        if(i==0 || arr[i]!=arr[i-1]) arr[pos++]=arr[i];
    }
    for(int i=0;i<pos;i++){
        if(i) printf(" ");
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
