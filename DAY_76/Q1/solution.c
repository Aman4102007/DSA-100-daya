// Day 76 - Question 1
// Problem: Count Connected Components (Undirected Graph)

#include <stdio.h>

int n, m;
int adj[101][101];
int vis[101];

void dfs(int u){
    vis[u]=1;
    for(int v=1; v<=n; v++) if(adj[u][v] && !vis[v]) dfs(v);
}

int main(){
    if(scanf("%d %d", &n, &m)!=2) return 0;
    for(int i=0;i<m;i++){
        int a,b; scanf("%d %d", &a, &b);
        adj[a][b]=adj[b][a]=1;
    }
    int comp=0;
    for(int i=1;i<=n;i++) if(!vis[i]){ dfs(i); comp++; }
    printf("%d", comp);
    return 0;
}
