// Day 19 - Question 1
// Problem: Pair Sum Closest to Zero

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int n,i; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),cmp); // sort array
    int l=0,r=n-1;
    int best=INT_MAX, x=0,y=0;
    while(l<r){
        int sum=arr[l]+arr[r];
        if(abs(sum)<best){
            best=abs(sum); x=arr[l]; y=arr[r];
        }
        if(sum<0) l++; else r--; // move pointers
    }
    if(x>y){int t=x;x=y;y=t;} // ensure ascending order
    printf("%d %d",x,y);
    return 0;
}
