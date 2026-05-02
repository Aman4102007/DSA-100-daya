// Day 57 - Question 2
// Problem: Flatten Binary Tree to Linked List

void flatten(struct TreeNode* root){
    if(!root)return;
    struct TreeNode* cur=root;
    while(cur){
        if(cur->left){
            struct TreeNode* t=cur->left;
            while(t->right)t=t->right;   // find tail of left subtree
            t->right=cur->right;         // attach original right
            cur->right=cur->left;        // move left to right
            cur->left=NULL;
        }
        cur=cur->right;                 // move to next
    }
}
