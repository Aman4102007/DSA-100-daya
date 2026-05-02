// Day 4 - Question 1
// Problem: Reverse an Array In-Place

#include <stdio.h>

int main(){
    int n,i,j; 
    if(scanf("%d",&n)!=1) return 0; 
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0,j=n-1;i<j;i++,j--){
        int t=arr[i]; arr[i]=arr[j]; arr[j]=t; // swap ends
    }
    for(i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
