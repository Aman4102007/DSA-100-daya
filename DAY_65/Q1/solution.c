// Day 65 - Question 1
// Problem: Cycle Detection in Undirected Graph (DFS)

#include <stdio.h>

int n,m;
int adj[101][101];
int vis[101];

int dfs(int u,int p){
    vis[u]=1;
    for(int v=1;v<=n;v++) if(adj[u][v]){
        if(!vis[v]) if(dfs(v,u)) return 1;
        else if(v!=p) return 1; // back edge
    }
    return 0;
}

int main(){
    if(scanf("%d%d",&n,&m)!=2) return 0;
    for(int i=0;i<m;i++){
        int a,b; scanf("%d%d",&a,&b);
        adj[a][b]=adj[b][a]=1;
    }
    for(int i=1;i<=n;i++) vis[i]=0;
    int has=0;
    for(int i=1;i<=n;i++) if(!vis[i]) if(dfs(i,0)){has=1;break;}
    printf(has?"YES":"NO");
    return 0;
}
