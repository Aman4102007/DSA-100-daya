// Day 70 - Question 1
// Problem: Bellman-Ford Algorithm

#include <stdio.h>

int main(){
    int n,m,u,v,w; long long dist[101];
    if(scanf("%d %d",&n,&m)!=2) return 0;
    for(int i=1;i<=n;i++) dist[i]=1e15; dist[1]=0; // source =1
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&u,&v,&w);
        if(dist[u]+w<dist[v]) dist[v]=dist[u]+w; // relax once to store edges
    }
    // Bellman-Ford
    for(int i=1;i<=n-1;i++){
        for(int i=0;i<m;i++){
            scanf("%d %d %d",&u,&v,&w);
            if(dist[u]+w<dist[v]) dist[v]=dist[u]+w;
        }
    }
    int neg=0;
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&u,&v,&w);
        if(dist[u]+w<dist[v]){neg=1;break;}
    }
    if(neg){
        printf("{\"output\":\"NEGATIVE CYCLE\"}\n");
    }else{
        printf("{\"distances\":[");
        for(int i=1;i<=n;i++){
            if(dist[i]>=1e15) printf("INF"); else printf("%lld",dist[i]);
            if(i<n) printf(",");
        }
        printf("]}\n");
    }
    return 0;
}
