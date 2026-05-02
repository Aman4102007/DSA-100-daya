// Day 43 - Question 2
// Problem: Binary Tree Inorder Traversal

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    // count nodes
    int n=0;struct TreeNode* st[1000];int top=-1;struct TreeNode* cur=root;
    while(cur||top!=-1){
        while(cur){st[++top]=cur;cur=cur->left;}
        cur=st[top--];n++;cur=cur->right;
    }
    int* res=malloc(n*sizeof(int));
    *returnSize=n;top=-1;cur=root;
    while(cur||top!=-1){
        while(cur){st[++top]=cur;cur=cur->left;}
        cur=st[top--];res[--n]=cur->val;cur=cur->right;
    }
    return res;
}