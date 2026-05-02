// Day 56 - Question 2
// Problem: Symmetric Tree

bool isSymmetric(struct TreeNode* root){
    if(!root) return true;
    bool helper(struct TreeNode* a, struct TreeNode* b){
        if(!a && !b) return true;
        if(!a || !b || a->val!=b->val) return false;
        return helper(a->left,b->right)&&helper(a->right,b->left);
    }
    return helper(root->left,root->right);
}