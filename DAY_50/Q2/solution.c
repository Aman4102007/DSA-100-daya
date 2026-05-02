// Day 50 - Question 2
// Problem: Search in BST

TreeNode* searchBST(TreeNode* root, int val){
    if(!root) return NULL; // not found
    if(root->val==val) return root;
    if(val<root->val) return searchBST(root->left,val);
    return searchBST(root->right,val);
}