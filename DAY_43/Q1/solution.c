// Day 43 - Question 1
// Problem: Binary Tree Construction (Level Order)

#include <stdio.h>

struct Node{int v;int l,r;};
struct Node nodes[100];
int n,arr[100];
int q[100],front,back;
int cnt=0; // number of nodes created

void inorder(int idx){
    if(idx==-1)return;
    inorder(nodes[idx].l);
    if(cnt>0)printf(" ");
    printf("%d",nodes[idx].v);
    cnt++;
    inorder(nodes[idx].r);
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    if(n==0)return 0;
    // create root
    nodes[0].v=arr[0];
    nodes[0].l=nodes[0].r=-1;
    q[0]=0; front=0; back=1; int idx=1;
    while(front<back && idx<n){
        int cur=q[front++];
        // left child
        if(idx<n){
            if(arr[idx]!=-1){
                nodes[back].v=arr[idx];
                nodes[back].l=nodes[back].r=-1;
                nodes[cur].l=back;
                q[back]=back; back++;
            }else nodes[cur].l=-1;
            idx++;
        }
        // right child
        if(idx<n){
            if(arr[idx]!=-1){
                nodes[back].v=arr[idx];
                nodes[back].l=nodes[back].r=-1;
                nodes[cur].r=back;
                q[back]=back; back++;
            }else nodes[cur].r=-1;
            idx++;
        }
    }
    cnt=0;
    inorder(0);
    return 0;
}
