// Day 82 - Question 1
// Problem: Upper Bound & Lower Bound Implementation

#include <stdio.h>

int main(){
    int n,x,i,arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    int l=0,r=n,mid,lb=n,ub=n;
    // lower bound
    while(l<r){
        mid=(l+r)/2;
        if(arr[mid]>=x){lb=mid; r=mid;}
        else l=mid+1;
    }
    // upper bound
    l=0; r=n;
    while(l<r){
        mid=(l+r)/2;
        if(arr[mid]>x){ub=mid; r=mid;}
        else l=mid+1;
    }
    printf("%d %d",lb,ub);
    return 0;
}
