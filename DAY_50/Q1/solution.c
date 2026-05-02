// Day 50 - Question 1
// Problem: BST Search

#include <stdio.h>

struct node{int v;struct node*l,*r;};
struct node*newnode(int x){struct node*n=malloc(sizeof *n);n->v=x;n->l=n->r=NULL;return n;}
struct node*ins(struct node*t,int x){if(!t)return newnode(x);if(x<t->v)t->l=ins(t->l,x);else t->r=ins(t->r,x);return t;}
int find(struct node*t,int x){while(t){if(t->v==x)return 1;if(x<t->v)t=t->l;else t=t->r;}return 0;}
int main(){int n,i,x;scanf("%d",&n);struct node*root=NULL;for(i=0;i<n;i++){scanf("%d",&x);root=ins(root,x);}scanf("%d",&x);printf("%d",find(root,x));return 0;}