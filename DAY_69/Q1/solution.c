// Day 69 - Question 1
// Problem: Dijkstraâ€™s Algorithm (Shortest Path)

#include <stdio.h>

#define INF 1000000000
#define MAXN 100

int main(){
    int n,m,s; // nodes, edges, source
    if(scanf("%d %d %d",&n,&m,&s)!=3) return 0;
    int w[MAXN][MAXN];
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) w[i][j]=INF;
    for(int i=0;i<m;i++){
        int u,v,c; scanf("%d %d %d",&u,&v,&c);
        w[u][v]=c; w[v][u]=c; // undirected
    }
    int dist[MAXN], used[MAXN];
    for(int i=1;i<=n;i++){dist[i]=INF; used[i]=0;}
    dist[s]=0;
    for(int it=1;it<=n;it++){
        int u=-1; int best=INF;
        for(int i=1;i<=n;i++) if(!used[i] && dist[i]<best){best=dist[i]; u=i;}
        if(u==-1) break;
        used[u]=1;
        for(int v=1;v<=n;v++) if(!used[v] && w[u][v]<INF){
            int nd=dist[u]+w[u][v];
            if(nd<dist[v]) dist[v]=nd;
        }
    }
    for(int i=1;i<=n;i++){
        if(dist[i]==INF) printf("INF");
        else printf("%d",dist[i]);
        if(i<n) printf(" ");
    }
    printf("\n");
    return 0;
}
