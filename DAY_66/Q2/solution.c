// Day 66 - Question 2
// Problem: Course Schedule

#include <stdbool.h>

static bool mat[2000][2000];
static unsigned char state[2000]; // 0=unvisited,1=visiting,2=visited

bool dfs(int v,int n){
    state[v]=1;
    for(int u=0;u<n;u++) if(mat[v][u]){
        if(state[u]==1) return false; // cycle
        if(state[u]==0 && !dfs(u,n)) return false;
    }
    state[v]=2; return true;
}

bool canFinish(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize){
    for(int i=0;i<numCourses;i++) for(int j=0;j<numCourses;j++) mat[i][j]=0;
    for(int i=0;i<prerequisitesSize;i++){
        int a=prerequisites[i][0];
        int b=prerequisites[i][1];
        mat[a][b]=1; // edge a->b
    }
    for(int i=0;i<numCourses;i++) state[i]=0;
    for(int i=0;i<numCourses;i++) if(state[i]==0 && !dfs(i,numCourses)) return false;
    return true;
}
