// Day 85 - Question 1
// Problem: Implement Merge Sort

#include <stdio.h>

int arr[100];
int temp[100];

void merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m && j<=r) temp[k++] = (arr[i]<=arr[j])?arr[i++]:arr[j++];
    while(i<=m) temp[k++] = arr[i++];
    while(j<=r) temp[k++] = arr[j++];
    for(i=l;i<=r;i++) arr[i]=temp[i];
}

void mergeSort(int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(l,m);
        mergeSort(m+1,r);
        merge(l,m,r);
    }
}

int main(){
    int n,i;
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    mergeSort(0,n-1);
    for(i=0;i<n;i++){
        if(i) putchar(' ');
        printf("%d",arr[i]);
    }
    putchar('\n');
    return 0;
}
