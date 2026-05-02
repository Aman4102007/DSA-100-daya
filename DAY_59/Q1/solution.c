// Day 59 - Question 1
// Problem: Build Tree from Inorder & Postorder

#include <stdio.h>

int n;
int in[100], post[100];

void build(int il, int ir, int pl, int pr){
    if(il>ir) return;                 // no nodes
    int root = post[pr];              // last in postorder is root
    printf("%d ", root);             // preorder output
    int i;
    for(i=il;i<=ir;i++) if(in[i]==root) break; // find root in inorder
    int left = i-il;                  // size of left subtree
    build(il,i-1,pl,pl+left-1);       // left subtree
    build(i+1,ir,pl+left,pr-1);       // right subtree
}

int main(){
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d", &in[i]);
    for(int i=0;i<n;i++) scanf("%d", &post[i]);
    build(0,n-1,0,n-1);
    printf("\n");
    return 0;
}
