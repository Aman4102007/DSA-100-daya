// Day 55 - Question 2
// Problem: Binary Tree Right Side View

int* rightSideView(struct TreeNode* root, int* returnSize){
    static int res[1000];
    static struct TreeNode* q[1000];
    int front=0, back=0, cnt=0;
    if(!root){*returnSize=0; return res;}
    q[back++]=root;
    while(front<back){
        int sz=back-front;
        for(int i=0;i<sz;i++){
            struct TreeNode* node=q[front++];
            if(node->left) q[back++]=node->left;
            if(node->right) q[back++]=node->right;
            if(i==sz-1) res[cnt++]=node->val;
        }
    }
    *returnSize=cnt;
    return res;
}