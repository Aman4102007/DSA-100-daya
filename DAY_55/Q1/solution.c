// Day 55 - Question 1
// Problem: Right View of Binary Tree

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int idx=0, level=0, first=1;
    while(idx<n){
        int sz=1<<level; // nodes in this level
        int right=-1;
        for(int j=0;j<sz && idx<n;j++){
            if(arr[idx]!=-1) right=arr[idx];
            idx++;
        }
        if(right!=-1){
            if(!first) printf(" ");
            printf("%d",right);
            first=0;
        }
        level++;
    }
    return 0;
}
