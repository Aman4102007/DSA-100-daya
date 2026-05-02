// Day 1 - Question 1
// Problem: Insert an Element in an Array

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[101];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int pos,x; scanf("%d%d",&pos,&x);
    // shift right from end to pos-1
    for(int i=n-1;i>=pos-1;i--) arr[i+1]=arr[i];
    arr[pos-1]=x; // insert
    for(int i=0;i<n+1;i++){
        if(i) putchar(' ');
        printf("%d",arr[i]);
    }
    putchar('\n');
    return 0;
}
