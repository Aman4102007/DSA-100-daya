// Day 40 - Question 1
// Problem: Heap Sort Using Max-Heap

#include <stdio.h>

void heapify(int a[], int n, int i){
    int l=2*i+1, r=2*i+2, largest=i;
    if(l<n && a[l]>a[largest]) largest=l;
    if(r<n && a[r]>a[largest]) largest=r;
    if(largest!=i){ int t=a[i]; a[i]=a[largest]; a[largest]=t; heapify(a,n,largest); }
}

int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int a[100];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=n/2-1;i>=0;i--) heapify(a,n,i); // build max‑heap
    for(int i=n-1;i>0;i--){ int t=a[0]; a[0]=a[i]; a[i]=t; heapify(a,i,0); }
    for(int i=0;i<n;i++) printf("%d%s", a[i], i==n-1?"\n":" ");
    return 0;
}
