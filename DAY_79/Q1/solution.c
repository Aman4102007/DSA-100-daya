// Day 79 - Question 1
// Problem: Single Source Shortest Path using Dijkstra’s Algorithm

#include <stdio.h>

#define INF 1000000000

int main(){
    int n,m; if(scanf("%d %d",&n,&m)!=2) return 0;
    int w[101][101];
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) w[i][j]=INF;
    for(int i=0;i<m;i++){
        int u,v,wt; scanf("%d %d %d",&u,&v,&wt);
        w[u][v]=wt; w[v][u]=wt; // undirected
    }
    int src; scanf("%d",&src);
    int dist[101], vis[101];
    for(int i=1;i<=n;i++){ dist[i]=INF; vis[i]=0; }
    dist[src]=0;
    for(int it=1; it<=n; it++){
        int u=-1, best=INF;
        for(int i=1;i<=n;i++) if(!vis[i] && dist[i]<best){best=dist[i]; u=i;}
        if(u==-1) break;
        vis[u]=1;
        for(int v=1; v<=n; v++) if(!vis[v] && w[u][v]!=INF){
            if(dist[u]+w[u][v] < dist[v]) dist[v]=dist[u]+w[u][v];
        }
    }
    for(int i=1;i<=n;i++){
        if(i>1) printf(" ");
        printf("%d", dist[i]);
    }
    printf("\n");
    return 0;
}
