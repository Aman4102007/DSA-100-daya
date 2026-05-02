// Day 53 - Question 2
// Problem: Binary Tree Level Order Traversal

#include <stdlib.h>
struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};
int** levelOrder(struct TreeNode* root, int** returnColumnSizes, int* returnSize){
    if(!root){*returnSize=0;*returnColumnSizes=NULL;return NULL;}
    // simple queue
    int cap=100;int qcap=cap;struct TreeNode** q=malloc(qcap*sizeof(struct TreeNode*));int front=0,back=0;q[back++]=root;
    int resCap=10;int curSize=0;int** res=malloc(resCap*sizeof(int*));int* sz=malloc(resCap*sizeof(int));
    while(front<back){int levelSize=back-front;int* arr=malloc(levelSize*sizeof(int));for(int i=0;i<levelSize;i++){struct TreeNode* node=q[front++];arr[i]=node->val;if(node->left){if(back==qcap){qcap*=2;q=realloc(q,qcap*sizeof(struct TreeNode*));}q[back++]=node->left;}if(node->right){if(back==qcap){qcap*=2;q=realloc(q,qcap*sizeof(struct TreeNode*));}q[back++]=node->right;}}
        if(curSize==resCap){resCap*=2;res=realloc(res,resCap*sizeof(int*));sz=realloc(sz,resCap*sizeof(int));}
        res[curSize]=arr;sz[curSize]=levelSize;curSize++;}
    free(q);*returnSize=curSize;*returnColumnSizes=sz;return res;}
