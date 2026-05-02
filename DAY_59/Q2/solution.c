// Day 59 - Question 2
// Problem: Construct Binary Tree from Inorder and Postorder Traversal

#include <stdlib.h>
struct TreeNode{int val;struct TreeNode* left;struct TreeNode* right;};
TreeNode* buildTree(int* inorder,int inorderSize,int* postorder,int postorderSize){
    if(postorderSize==0)return NULL;
    int rootVal=postorder[postorderSize-1];
    TreeNode* root=malloc(sizeof(TreeNode));
    root->val=rootVal;root->left=root->right=NULL;
    int i;for(i=0;i<inorderSize;i++)if(inorder[i]==rootVal)break;
    root->left=buildTree(inorder,i,postorder,i);
    root->right=buildTree(inorder+i+1,inorderSize-i-1,postorder+i,postorderSize-i-1);
    return root;
}