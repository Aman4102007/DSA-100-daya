// Day 60 - Question 1
// Problem: Validate Min-Heap

#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[101];
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    int ok=1;
    for(int i=1;i<=n/2;i++){
        int l=2*i, r=2*i+1;
        if(l<=n && arr[i]>arr[l]) ok=0;
        if(r<=n && arr[i]>arr[r]) ok=0;
    }
    printf(ok?"YES":"NO");
    return 0;
}
