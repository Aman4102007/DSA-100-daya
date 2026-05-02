// Day 93 - Question 1
// Problem: Insertion Sort Implementation

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=1;i<n;i++){
        int x=arr[i], pos=i-1; // key and position
        while(pos>=0 && arr[pos]>x){ arr[pos+1]=arr[pos]; pos--; }
        arr[pos+1]=x; // insert
    }
    for(int i=0;i<n;i++){
        if(i) putchar(' ');
        printf("%d",arr[i]);
    }
    putchar('\n');
    return 0;
}
