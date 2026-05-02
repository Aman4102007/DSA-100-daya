// Day 51 - Question 2
// Problem: Lowest Common Ancestor of a BST

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    while(root){
        if(p->val<root->val && q->val<root->val) root=root->left;
        else if(p->val>root->val && q->val>root->val) root=root->right;
        else return root; // split point
    }
    return NULL; // unreachable
}