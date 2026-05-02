// Day 52 - Question 2
// Problem: Lowest Common Ancestor of a Binary Tree

#include <stddef.h>
struct TreeNode{int val; struct TreeNode *left,*right;};
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    if(!root) return NULL;
    if(root==p||root==q) return root;
    TreeNode* l=lowestCommonAncestor(root->left,p,q);
    TreeNode* r=lowestCommonAncestor(root->right,p,q);
    if(l&&r) return root;
    return l?l:r;
}
