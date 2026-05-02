// Day 53 - Question 1
// Problem: Print Binary Tree Vertical Order

#include <stdio.h>

#define MAX 100

struct Node{int val;int l;int r;};

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[MAX];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    struct Node node[MAX];
    int idx=0; // index of next node to create
    int q[MAX]; int front=0,back=0; // queue of node indices
    int hd[MAX]; // horizontal distance for each node
    // build tree
    if(n==0) return 0;
    if(a[0]==-1){return 0;} // empty tree
    node[0].val=a[0]; node[0].l=node[0].r=-1; hd[0]=0;
    q[back++]=0; int pos=1; // next value in a
    while(front<back && pos<n){
        int cur=q[front++];
        // left child
        if(pos<n && a[pos]!=-1){
            node[idx+1].val=a[pos]; node[idx+1].l=node[idx+1].r=-1;
            node[cur].l=idx+1; hd[idx+1]=hd[cur]-1;
            q[back++]=idx+1; idx++;
        }else node[cur].l=-1;
        pos++;
        // right child
        if(pos<n && a[pos]!=-1){
            node[idx+1].val=a[pos]; node[idx+1].l=node[idx+1].r=-1;
            node[cur].r=idx+1; hd[idx+1]=hd[cur]+1;
            q[back++]=idx+1; idx++;
        }else node[cur].r=-1;
        pos++;
    }
    int total=idx+1; // number of real nodes
    int minh=hd[0],maxh=hd[0];
    for(int i=1;i<total;i++){ if(hd[i]<minh) minh=hd[i]; if(hd[i]>maxh) maxh=hd[i]; }
    for(int h=minh;h<=maxh;h++){
        int first=1;
        for(int i=0;i<total;i++) if(hd[i]==h){
            if(!first) printf(" ");
            printf("%d",node[i].val);
            first=0;
        }
        printf("\n");
    }
    return 0;
}
