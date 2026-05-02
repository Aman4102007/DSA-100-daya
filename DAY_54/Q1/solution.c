// Day 54 - Question 1
// Problem: Zigzag Traversal

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int val[105], l[105], r[105];
    for(int i=1;i<=n;i++) scanf("%d",&val[i]);
    for(int i=1;i<=n;i++){
        if(val[i]==-1){l[i]=r[i]=-1; continue;}
        int left=2*i, right=2*i+1;
        l[i]=(left<=n && val[left]!=-1)?left:-1;
        r[i]=(right<=n && val[right]!=-1)?right:-1;
    }
    int st1[105], st2[105];
    int top1=0, top2=0;
    if(val[1]!=-1) st1[++top1]=1; // push root
    int first=1;
    while(top1||top2){
        while(top1){
            int node=st1[top1--];
            if(first){printf("%d",val[node]); first=0;} else printf(" %d",val[node]);
            if(l[node]!=-1) st2[++top2]=l[node];
            if(r[node]!=-1) st2[++top2]=r[node];
        }
        while(top2){
            int node=st2[top2--];
            if(first){printf("%d",val[node]); first=0;} else printf(" %d",val[node]);
            if(r[node]!=-1) st1[++top1]=r[node];
            if(l[node]!=-1) st1[++top1]=l[node];
        }
    }
    return 0;
}
