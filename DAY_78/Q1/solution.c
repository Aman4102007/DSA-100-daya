// Day 78 - Question 1
// Problem: Minimum Spanning Tree using Prim’s Algorithm

#include <stdio.h>
int main(){
    int n,m; if(scanf("%d%d",&n,&m)!=2) return 0;
    int adj[101][101];
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) adj[i][j]=1e9;
    for(int k=0;k<m;k++){
        int u,v,w; scanf("%d%d%d",&u,&v,&w);
        if(w<adj[u][v]){adj[u][v]=adj[v][u]=w;}
    }
    int vis[101]={0}, key[101];
    for(int i=1;i<=n;i++) key[i]=1e9; key[1]=0;
    int total=0;
    for(int i=1;i<=n;i++){
        int u=-1; int min=1e9;
        for(int j=1;j<=n;j++) if(!vis[j] && key[j]<min){min=key[j]; u=j;}
        vis[u]=1; total+=min;
        for(int v=1;v<=n;v++) if(!vis[v] && adj[u][v]<key[v]) key[v]=adj[u][v];
    }
    printf("%d",total);
    return 0;
}
