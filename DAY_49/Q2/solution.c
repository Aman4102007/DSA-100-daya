// Day 49 - Question 2
// Problem: Insert into BST

TreeNode* insertIntoBST(TreeNode* root, int val){
    if(!root) return (TreeNode*)malloc(sizeof(TreeNode)); // create new node
    TreeNode* cur=root;
    while(1){
        if(val<cur->val){
            if(cur->left) cur=cur->left; else{cur->left=(TreeNode*)malloc(sizeof(TreeNode)); break;}
        }else{
            if(cur->right) cur=cur->right; else{cur->right=(TreeNode*)malloc(sizeof(TreeNode)); break;}
        }
    }
    cur->val=val; cur->left=cur->right=NULL; return root;
}