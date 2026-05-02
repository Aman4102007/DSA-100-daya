// Day 66 - Question 1
// Problem: Cycle Detection in Directed Graph

#include <stdio.h>

int n,m;int g[105][105];int vis[105],rec[105];

int dfs(int u){
    vis[u]=rec[u]=1;
    for(int v=1;v<=n;v++) if(g[u][v]){
        if(!vis[v] && dfs(v)) return 1;
        if(rec[v]) return 1;
    }
    rec[u]=0;return 0;
}

int main(){
    if(scanf("%d %d",&n,&m)!=2) return 0;
    for(int i=0;i<m;i++){int a,b;scanf("%d %d",&a,&b);g[a][b]=1;}
    for(int i=1;i<=n;i++) if(!vis[i] && dfs(i)){printf("YES\n");return 0;}
    printf("NO\n");
    return 0;
}
