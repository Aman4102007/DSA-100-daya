// Day 68 - Question 1
// Problem: Topological Sort (Kahnâ€™s BFS Algorithm)

#include <stdio.h>
int main(){
    int n,m; if(scanf("%d%d",&n,&m)!=2) return 0;
    int g[101][101]={0}, indeg[101]={0};
    for(int i=0;i<m;i++){
        int u,v; scanf("%d%d",&u,&v); g[u][v]=1; indeg[v]++; }
    int q[101], front=0, back=0;
    for(int i=1;i<=n;i++) if(indeg[i]==0) q[back++]=i; // enqueue
    int out[101], outcnt=0;
    while(front<back){
        int u=q[front++]; out[outcnt++]=u;
        for(int v=1;v<=n;v++) if(g[u][v]){ if(--indeg[v]==0) q[back++]=v; }
    }
    for(int i=0;i<outcnt;i++){
        if(i) putchar(' '); printf("%d",out[i]);
    }
    putchar('\n');
    return 0;
}
