// Day 75 - Question 2
// Problem: Is Graph Bipartite?

#include <stdbool.h>

bool isBipartite(int** graph, int graphSize, int* graphColSize){
    int color[graphSize];
    for(int i=0;i<graphSize;i++) color[i]=-1;
    int q[graphSize];
    for(int s=0;s<graphSize;s++) if(color[s]==-1){
        int front=0,back=0; q[back++]=s; color[s]=0;
        while(front<back){
            int u=q[front++];
            for(int k=0;k<graphColSize[u];k++){
                int v=graph[u][k];
                if(color[v]==-1){color[v]=color[u]^1; q[back++]=v;}
                else if(color[v]==color[u]) return false;
            }
        }
    }
    return true;
}