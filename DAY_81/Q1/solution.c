// Day 81 - Question 1
// Problem: Implement Bubble Sort

#include <stdio.h>

int main(){
    int n,i,j,arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    // bubble sort
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){int t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;}
        }
    }
    for(i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
