// Day 83 - Question 1
// Problem: Implement Selection Sort

#include <stdio.h>

int main(){
    int n,i,j,pos,x;
    int arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++){
        pos=i; // assume minimum at i
        for(j=i+1;j<n;j++) if(arr[j]<arr[pos]) pos=j;
        if(pos!=i){ x=arr[i]; arr[i]=arr[pos]; arr[pos]=x; }
    }
    for(i=0;i<n;i++){
        if(i) putchar(' ');
        printf("%d",arr[i]);
    }
    putchar('\n');
    return 0;
}
