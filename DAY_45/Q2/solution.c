// Day 45 - Question 2
// Problem: Maximum Depth of Binary Tree

int maxDepth(struct TreeNode* root){
    if(!root) return 0;
    int l=maxDepth(root->left), r=maxDepth(root->right);
    return l>r?l+1:r+1;
}