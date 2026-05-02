// Day 47 - Question 2
// Problem: Maximum Depth of Binary Tree

int maxDepth(struct TreeNode* r){return r?1+ (maxDepth(r->left)>maxDepth(r->right)?maxDepth(r->left):maxDepth(r->right)) :0; }