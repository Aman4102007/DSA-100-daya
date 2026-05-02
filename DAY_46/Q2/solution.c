// Day 46 - Question 2
// Problem: Binary Tree Level Order Traversal

#include <stdio.h>
#include <stdlib.h>
struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};
int** levelOrder(struct TreeNode* root,int** returnColumnSizes,int* returnSize){
    if(!root){*returnSize=0;*returnColumnSizes=NULL;return NULL;}
    int cap=1000;int *q=malloc(cap*sizeof(int));int *nodes=malloc(cap*sizeof(int));int front=0,back=0;int sz=0;int *col=NULL;int colcap=10;int *colsz=malloc(colcap*sizeof(int));
    // store pointers as ints
    q[back++]= (int)root; sz++; colsz[sz-1]=0;
    int **res=malloc(1000*sizeof(int*));
    while(front<back){
        int levelSize=back-front;int *row=malloc(levelSize*sizeof(int));int r=0;
        for(int i=0;i<levelSize;i++){
            struct TreeNode* node=(struct TreeNode*)q[front++];
            row[r++]=node->val;colsz[sz-1]++;
            if(node->left){q[back++]=(int)node->left;colsz[sz++]=0;}
            if(node->right){q[back++]=(int)node->right;colsz[sz++]=0;}
        }
        res[(*returnSize)++]=row;
    }
    *returnColumnSizes=colsz;return res;}
