// Day 47 - Question 1
// Problem: Height of Binary Tree

#include <stdio.h>

int n;
int parent[100];
int child[100][100];
int childcnt[100];

int dfs(int u){
    int h=0;
    for(int i=0;i<childcnt[u];i++){
        int v=child[u][i];
        int t=dfs(v)+1;
        if(t>h) h=t;
    }
    return h;
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&parent[i]);
        childcnt[i]=0;
    }
    int root=-1;
    for(int i=0;i<n;i++){
        if(parent[i]==-1){root=i;continue;}
        child[parent[i]][childcnt[parent[i]]++]=i;
    }
    int height=dfs(root);
    printf("%d",height);
    return 0;
}
