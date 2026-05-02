// Day 44 - Question 2
// Problem: Binary Tree Preorder Traversal

#include <stdlib.h>
struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};
static int cnt(struct TreeNode* n){return n?1+cnt(n->left)+cnt(n->right):0;}
static void fill(struct TreeNode* n,int* a,int* idx){if(!n)return; a[(*idx)++]=n->val; fill(n->left,a,idx); fill(n->right,a,idx);} 
int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int n=cnt(root); *returnSize=n; int* res=malloc(n*sizeof(int)); int i=0; fill(root,res,&i); return res;}
