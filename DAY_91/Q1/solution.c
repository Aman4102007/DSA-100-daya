// Day 91 - Question 1
// Problem: Merge Sort Implementation

#include <stdio.h>

void merge(int a[], int l, int m, int r){
    int i=l, j=m+1, k=l, temp[100];
    while(i<=m && j<=r) temp[k++] = (a[i]<=a[j])?a[i++]:a[j++];
    while(i<=m) temp[k++] = a[i++];
    while(j<=r) temp[k++] = a[j++];
    for(i=l;i<=r;i++) a[i]=temp[i];
}

void mergesort(int a[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
    int n,i; if(scanf("%d",&n)!=1) return 0; int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    mergesort(arr,0,n-1);
    for(i=0;i<n;i++) printf("%d%s",arr[i],i==n-1?"\n":" ");
    return 0;
}
