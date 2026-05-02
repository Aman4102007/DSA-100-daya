// Day 51 - Question 1
// Problem: Lowest Common Ancestor in BST

#include <stdio.h>

struct Node{int v;int l;int r;};
struct Node t[100];int cnt=0;int root=-1;
int newnode(int val){t[cnt].v=val;t[cnt].l=t[cnt].r=-1;return cnt++;}
void insert(int val){if(root==-1){root=newnode(val);return;}int cur=root;while(1){if(val<t[cur].v){if(t[cur].l==-1){t[cur].l=newnode(val);break;}cur=t[cur].l;}else{if(t[cur].r==-1){t[cur].r=newnode(val);break;}cur=t[cur].r;}}}
int main(){int n,x,y;scanf("%d",&n);for(int i=0;i<n;i++){int v;scanf("%d",&v);insert(v);}scanf("%d%d",&x,&y);int cur=root;while(cur!=-1){int cv=t[cur].v;if(x<cv&&y<cv)cur=t[cur].l;else if(x>cv&&y>cv)cur=t[cur].r;else{printf("%d",cv);break;}}return 0;}
