// Day 46 - Question 1
// Problem: Level Order Traversal

#include <stdio.h>
int main(){
    int n,i; if(scanf("%d",&n)!=1) return 0; int arr[100];
    for(i=1;i<=n;i++) scanf("%d",&arr[i]);
    for(i=1;i<=n;i++){
        if(i>1) printf(" ");
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
