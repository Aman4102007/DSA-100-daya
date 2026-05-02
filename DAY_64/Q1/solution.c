// Day 64 - Question 1
// Problem: Breadth First Search (BFS)

#include <stdio.h>
int main(){
    int n,i,j,m,src;
    scanf("%d",&n);
    int adj[100][100];
    int deg[100];
    for(i=0;i<n;i++){
        scanf("%d",&deg[i]);
        for(j=0;j<deg[i];j++) scanf("%d",&adj[i][j]);
    }
    scanf("%d",&src);
    int vis[100]={0},q[100],front=0,back=0;
    vis[src]=1; q[back++]=src;
    while(front<back){
        int u=q[front++];
        printf("%d ",u);
        for(j=0;j<deg[u];j++){
            int v=adj[u][j];
            if(!vis[v]){vis[v]=1; q[back++]=v;}
        }
    }
    return 0;
}
