// Day 67 - Question 1
// Problem: Topological Sort (DFS)

#include <stdio.h>

int n,m; // number of vertices and edges
int to[2000], nxt[2000], head[101]; // adjacency list (max 1000 edges)
int idx=0;
int vis[101], stack[101], top=0;

void add(int u,int v){to[idx]=v;nxt[idx]=head[u];head[u]=idx++;}

void dfs(int u){vis[u]=1;for(int e=head[u];e!=-1;e=nxt[e]){int v=to[e];if(!vis[v])dfs(v);}stack[top++]=u;}

int main(){
    if(scanf("%d %d",&n,&m)!=2)return 0;for(int i=1;i<=n;i++)head[i]=-1;for(int i=0;i<m;i++){int u,v;scanf("%d %d",&u,&v);add(u,v);}for(int i=1;i<=n;i++)if(!vis[i])dfs(i);for(int i=top-1;i>=0;i--)printf("%d ",stack[i]);return 0;}
