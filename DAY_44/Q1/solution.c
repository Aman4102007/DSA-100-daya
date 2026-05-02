// Day 44 - Question 1
// Problem: Binary Tree Traversals

#include <stdio.h>

int n;
int val[105];
int left[105], right[105];
int idx[105]; // queue for building

void inorder(int u){
    if(u==-1)return;
    inorder(left[u]);
    printf("%d ", val[u]);
    inorder(right[u]);
}
void preorder(int u){
    if(u==-1)return;
    printf("%d ", val[u]);
    preorder(left[u]);
    preorder(right[u]);
}
void postorder(int u){
    if(u==-1)return;
    postorder(left[u]);
    postorder(right[u]);
    printf("%d ", val[u]);
}

int main(){
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d", &val[i]);
    for(int i=0;i<n;i++){ left[i]=right[i]=-1; }
    int front=0, back=0;
    if(n>0){
        idx[back++]=0; // root index
        int pos=1;
        while(front<back && pos<n){
            int cur=idx[front++];
            if(pos<n && val[pos]!=-1){
                left[cur]=pos;
                idx[back++]=pos;
            }
            pos++;
            if(pos<n && val[pos]!=-1){
                right[cur]=pos;
                idx[back++]=pos;
            }
            pos++;
        }
    }
    inorder(0); printf("\n");
    preorder(0); printf("\n");
    postorder(0); printf("\n");
    return 0;
}
