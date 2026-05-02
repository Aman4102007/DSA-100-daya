// Day 61 - Question 1
// Problem: Graph Representation Using Adjacency Matrix

#include <stdio.h>
int main(){
    int n,m,u,v; // vertices, edges, endpoints
    if(scanf("%d%d",&n,&m)!=2) return 0;
    int mat[101][101]={0}; // adjacency matrix
    for(int i=0;i<m;i++){
        scanf("%d%d",&u,&v);
        mat[u][v]=1; // directed edge
        // if undirected, also set mat[v][u]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",mat[i][j]);
            if(j<n) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
