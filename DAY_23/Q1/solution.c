// Day 23 - Question 1
// Problem: Merge Two Sorted Linked Lists

#include <stdio.h>

int main(){
    int n,m,i,j,k;
    scanf("%d",&n);
    int a[100],b[100];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    i=j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]) printf("%d ",a[i++]);
        else printf("%d ",b[j++]);
    }
    while(i<n) printf("%d ",a[i++]);
    while(j<m) printf("%d ",b[j++]);
    return 0;
}
