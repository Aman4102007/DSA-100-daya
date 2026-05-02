// Day 58 - Question 2
// Problem: Construct Binary Tree from Preorder and Inorder Traversal

#include <stdlib.h>
struct TreeNode{int val;struct TreeNode *left,*right;};
TreeNode* buildTree(int* preorder,int preorderSize,int* inorder,int inorderSize){
    if(preorderSize==0||inorderSize==0)return NULL;
    int rootVal=preorder[0];
    TreeNode* root=malloc(sizeof(TreeNode));
    root->val=rootVal;root->left=root->right=NULL;
    int i;for(i=0;i<inorderSize;i++)if(inorder[i]==rootVal)break;
    root->left=buildTree(preorder+1,i,inorder,i);
    root->right=buildTree(preorder+1+i,inorderSize-i-1,inorder+i+1,inorderSize-i-1);
    return root;
}
