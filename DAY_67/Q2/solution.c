// Day 67 - Question 2
// Problem: Course Schedule II

#include <stdlib.h>

int head[2000], to[5000], nxt[5000], e, vis[2000], res[2000], idx;

int dfs(int u){
    vis[u]=1;
    for(int i=head[u]; i!=-1; i=nxt[i]){
        int v=to[i];
        if(vis[v]==1) return 0; // cycle
        if(vis[v]==0 && !dfs(v)) return 0;
    }
    vis[u]=2;
    res[idx--]=u;
    return 1;
}

int* findOrder(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize, int* returnSize){
    for(int i=0;i<numCourses;i++) head[i]=-1, vis[i]=0;
    e=0;
    for(int i=0;i<prerequisitesSize;i++){
        int a=prerequisites[i][0], b=prerequisites[i][1];
        to[e]=a; nxt[e]=head[b]; head[b]=e++; // edge b->a
    }
    idx=numCourses-1;
    for(int i=0;i<numCourses;i++) if(vis[i]==0 && !dfs(i)){
        *returnSize=0; return NULL; // cycle
    }
    int* ans=malloc(numCourses*sizeof(int));
    for(int i=0;i<numCourses;i++) ans[i]=res[i];
    *returnSize=numCourses;
    return ans;
}
