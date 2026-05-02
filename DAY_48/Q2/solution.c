// Day 48 - Question 2
// Problem: Sum of Left Leaves

int sumOfLeftLeaves(struct TreeNode* root){
    if(!root) return 0;
    int sum=0;
    if(root->left){
        if(!root->left->left && !root->left->right) sum+=root->left->val; // left leaf
        else sum+=sumOfLeftLeaves(root->left);
    }
    sum+=sumOfLeftLeaves(root->right);
    return sum;
}