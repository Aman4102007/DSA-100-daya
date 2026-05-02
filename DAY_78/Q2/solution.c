// Day 78 - Question 2
// Problem: Articulation Points (GFG)

#include <stdio.h>

// Simple DFS based articulation point finder
// V: number of vertices (0..V-1)
// adj: adjacency list stored as array of arrays, adj[u][k] = v, -1 terminates
// E: maximum edges per vertex
// ap: output array (size V) set to 1 if articulation point
// cnt: pointer to store number of articulation points

void articulationPoints(int V, int adj[][100], int E, int *ap, int *cnt){
    int disc[100], low[100], parent[100], visited[100];
    for(int i=0;i<V;i++){disc[i]=low[i]=parent[i]=-1; visited[i]=0; ap[i]=0;}
    int time=0, root=0, rootChildren=0;
    void dfs(int u){
        visited[u]=1; disc[u]=low[u]=++time;
        for(int i=0;i<E && adj[u][i]!=-1;i++){
            int v=adj[u][i];
            if(!visited[v]){
                parent[v]=u; if(u==root) rootChildren++;
                dfs(v);
                low[u]=low[u]<low[v]?low[u]:low[v];
                if(parent[u]==-1 && rootChildren>1) ap[u]=1;
                if(parent[u]!=-1 && low[v]>=disc[u]) ap[u]=1;
            }else if(v!=parent[u]){
                low[u]=low[u]<disc[v]?low[u]:disc[v];
            }
        }
    }
    for(int i=0;i<V;i++) if(!visited[i]){root=i; rootChildren=0; dfs(i);}    
    *cnt=0; for(int i=0;i<V;i++) if(ap[i]) (*cnt)++;
}
