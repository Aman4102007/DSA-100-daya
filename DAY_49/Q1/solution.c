// Day 49 - Question 1
// Problem: BST Insert

#include <stdio.h>

struct Node{int v;struct Node*l,*r;};
struct Node*newnode(int x){static struct Node pool[100];static int idx=0;struct Node*n=&pool[idx++];n->v=x;n->l=n->r=NULL;return n;}
struct Node*ins(struct Node*root,int x){if(!root)return newnode(x);if(x<root->v)root->l=ins(root->l,x);else root->r=ins(root->r,x);return root;}
void inorder(struct Node*root){if(!root)return;inorder(root->l);printf("%d ",root->v);inorder(root->r);}
int main(){int n,i,x;scanf("%d",&n);struct Node*root=NULL;for(i=0;i<n;i++){scanf("%d",&x);root=ins(root,x);}inorder(root);return 0;}
