// Day 57 - Question 1
// Problem: Mirror a Binary Tree

#include <stdio.h>

int n, arr[105], left[105], right[105];
int first = 1;

void inorder(int v){
    if(v==-1) return;
    inorder(left[v]);
    if(!first) printf(" ");
    printf("%d", arr[v]);
    first = 0;
    inorder(right[v]);
}

int main(){
    if(scanf("%d", &n)!=1) return 0;
    for(int i=1;i<=n;i++) scanf("%d", &arr[i]);
    for(int i=1;i<=n;i++){
        if(arr[i]==-1){ left[i]=right[i]=-1; continue; }
        int l=2*i, r=2*i+1;
        left[i]  = (l<=n && arr[l]!=-1)? l : -1;
        right[i] = (r<=n && arr[r]!=-1)? r : -1;
    }
    for(int i=1;i<=n;i++) if(arr[i]!=-1) { int t=left[i]; left[i]=right[i]; right[i]=t; }
    inorder(1);
    return 0;
}
