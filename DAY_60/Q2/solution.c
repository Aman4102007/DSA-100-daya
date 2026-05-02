// Day 60 - Question 2
// Problem: Binary Tree Cameras

int minCameraCover(struct TreeNode* root){
    int ans=0;
    int dfs(struct TreeNode* node){
        if(!node) return 1; // null is covered
        int l=dfs(node->left), r=dfs(node->right);
        if(l==2||r==2){ ans++; return 0; } // place camera
        if(l==0||r==0) return 1; // covered by child
        return 2; // needs camera
    }
    if(dfs(root)==2) ans++;
    return ans;
}