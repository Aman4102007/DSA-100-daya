// Day 58 - Question 1
// Problem: Build Tree from Inorder & Preorder

#include <stdio.h>

int n;
int pre[100], in[100];

// find index of value x in inorder between l..r
int find(int x,int l,int r){
    for(int i=l;i<=r;i++) if(in[i]==x) return i;
    return -1;
}

void build(int pl,int pr,int il,int ir){
    if(pl>pr) return; // no nodes
    int root=pre[pl];
    int idx=find(root,il,ir);
    int leftSize=idx-il;
    // left subtree
    build(pl+1,pl+leftSize,il,idx-1);
    // right subtree
    build(pl+leftSize+1,pr,idx+1,ir);
    printf("%d ",root); // postorder output
}

int main(){
    if(scanf("%d",&n)!=1) return 0;
    for(int i=0;i<n;i++) scanf("%d",&pre[i]);
    for(int i=0;i<n;i++) scanf("%d",&in[i]);
    build(0,n-1,0,n-1);
    return 0;
}
