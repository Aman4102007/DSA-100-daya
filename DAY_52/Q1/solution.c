// Day 52 - Question 1
// Problem: LCA in Binary Tree

#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[101]; // n <=100
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    int x,y; scanf("%d %d",&x,&y);
    int ix=0,iy=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==x) ix=i;
        if(arr[i]==y) iy=i;
    }
    while(ix!=iy){
        if(ix>iy) ix/=2; else iy/=2;
    }
    printf("%d",arr[ix]);
    return 0;
}
