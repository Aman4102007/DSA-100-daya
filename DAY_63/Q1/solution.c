// Day 63 - Question 1
// Problem: Depth First Search (DFS)

#include <stdio.h>

int n, vis[101], adj[101][101], deg[101];

void dfs(int u){
    vis[u]=1; printf("%d ",u);
    for(int i=0;i<deg[u];i++){
        int v=adj[u][i];
        if(!vis[v]) dfs(v);
    }
}

int main(){
    int i,j,k,s;
    if(scanf("%d",&n)!=1) return 0;
    for(i=1;i<=n;i++){
        scanf("%d",&k);
        deg[i]=k;
        for(j=0;j<k;j++) scanf("%d",&adj[i][j]);
    }
    scanf("%d",&s);
    for(i=1;i<=n;i++) vis[i]=0;
    dfs(s);
    return 0;
}
