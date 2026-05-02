// Day 77 - Question 1
// Problem: Check if Graph is Connected

#include <stdio.h>

int n,m;
int adj[101][101];
int vis[101];

void dfs(int u){
    vis[u]=1;
    for(int v=1;v<=n;v++) if(adj[u][v] && !vis[v]) dfs(v);
}

int main(){
    if(scanf("%d %d",&n,&m)!=2) return 0;
    for(int i=0;i<m;i++){
        int a,b; scanf("%d %d",&a,&b);
        adj[a][b]=adj[b][a]=1;
    }
    dfs(1);
    int all=1;
    for(int i=1;i<=n;i++) if(!vis[i]){all=0;break;}
    if(all) printf("CONNECTED\n");
    else printf("NOT CONNECTED\n");
    return 0;
}
