// Day 62 - Question 1
// Problem: Graph Representation Using Adjacency List

#include <stdio.h>

int main(){
    int n,m; // number of vertices and edges
    if(scanf("%d %d",&n,&m)!=2) return 0;
    int adj[100][100];
    int deg[100]={0};
    for(int i=0;i<m;i++){
        int u,v; scanf("%d %d",&u,&v);
        adj[u][deg[u]++]=v; // add v to u's list
        adj[v][deg[v]++]=u; // add u to v's list (undirected)
    }
    for(int i=1;i<=n;i++){
        printf("%d: ",i);
        for(int j=0;j<deg[i];j++){
            printf("%d",adj[i][j]);
            if(j<deg[i]-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
