// Day 92 - Question 1
// Problem: Quick Sort Implementation

#include <stdio.h>

void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}
int partition(int a[],int l,int r){int p=a[r],i=l-1;for(int j=l;j<r;j++)if(a[j]<=p){i++;swap(&a[i],&a[j]);}swap(&a[i+1],&a[r]);return i+1;}
void quick(int a[],int l,int r){if(l<r){int p=partition(a,l,r);quick(a,l,p-1);quick(a,p+1,r);}}
int main(){int n;scanf("%d",&n);int arr[100];for(int i=0;i<n;i++)scanf("%d",&arr[i]);quick(arr,0,n-1);for(int i=0;i<n;i++)printf("%d ",arr[i]);return 0;}
