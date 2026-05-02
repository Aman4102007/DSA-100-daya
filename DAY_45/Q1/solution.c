// Day 45 - Question 1
// Problem: Height of a Binary Tree

#include <stdio.h>

int arr[100];
int n;

int h(int i){
    if(i>=n || arr[i]==-1) return 0;            // no node
    int l=h(2*i+1);                            // left subtree
    int r=h(2*i+2);                            // right subtree
    return 1+(l>r?l:r);                        // node + deeper child
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("%d",h(0));
    return 0;
}
