// Day 77 - Question 2
// Problem: Critical Connections in a Network

#include <stdio.h>

// LeetCode C signature
int** criticalConnections(int n, int** connections, int connectionsSize, int* connectionsColSize, int* returnSize, int** returnColumnSizes){
    // adjacency list using static arrays
    int maxE = connectionsSize*2;
    int head[1005];
    int to[2005];
    int nxt[2005];
    for(int i=0;i<n;i++) head[i]=-1;
    int e=0;
    for(int i=0;i<connectionsSize;i++){
        int u=connections[i][0], v=connections[i][1];
        to[e]=v; nxt[e]=head[u]; head[u]=e++;
        to[e]=u; nxt[e]=head[v]; head[v]=e++;
    }
    int disc[1005], low[1005], t=0;
    int res[1005][2];
    int resCnt=0;
    void dfs(int u,int p){
        disc[u]=low[u]=++t;
        for(int i=head[u];i!=-1;i=nxt[i]){
            int v=to[i];
            if(v==p) continue;
            if(!disc[v]){ dfs(v,u); low[u]=low[u]<low[v]?low[u]:low[v];
                if(low[v]>disc[u]){ res[resCnt][0]=u; res[resCnt][1]=v; resCnt++; }
            }else low[u]=low[u]<disc[v]?low[u]:disc[v];
        }
    }
    dfs(0,-1);
    *returnSize=resCnt;
    *returnColumnSizes=malloc(resCnt*sizeof(int));
    for(int i=0;i<resCnt;i++) (*returnColumnSizes)[i]=2;
    int** ans=malloc(resCnt*sizeof(int*));
    for(int i=0;i<resCnt;i++){
        ans[i]=malloc(2*sizeof(int));
        ans[i][0]=res[i][0]; ans[i][1]=res[i][1];
    }
    return ans;
}
