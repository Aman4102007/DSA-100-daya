// Day 54 - Question 2
// Problem: Binary Tree Zigzag Level Order Traversal

#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int** zigzagLevelOrder(struct TreeNode* root, int** returnColumnSizes, int* returnSize){
    if(!root){*returnSize=0; *returnColumnSizes=NULL; return NULL;}
    // queue
    struct TreeNode **q=malloc(sizeof(struct TreeNode*)*1000);int f=0,b=0;q[b++]=root;
    int **res=NULL;int *col=NULL;int lev=0;
    while(f<b){int sz=b-f;int *lvl=malloc(sizeof(int)*sz);int i;
        for(i=0;i<sz;i++){
            struct TreeNode *cur=q[f++];lvl[i]=cur->val;
            if(cur->left)q[b++]=cur->left; if(cur->right)q[b++]=cur->right;
        }
        res=realloc(res,sizeof(int*)*(lev+1));res[lev]=lvl;
        col=realloc(col,sizeof(int)*(lev+1));col[lev]=sz;
        lev++;}
    *returnSize=lev;*returnColumnSizes=col;return res;}