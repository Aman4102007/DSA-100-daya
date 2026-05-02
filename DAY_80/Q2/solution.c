// Day 80 - Question 2
// Problem: Find the City With the Smallest Number of Neighbors

#include <limits.h>
int findTheCity(int n, int edges[][3], int edgesSize, int distanceThreshold){
    int dist[101][101];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)dist[i][j]=(i==j?0:INT_MAX/2);
    for(int k=0;k<edgesSize;k++){
        int u=edges[k][0],v=edges[k][1],w=edges[k][2];
        if(w<dist[u][v]){dist[u][v]=dist[v][u]=w;}
    }
    for(int k=0;k<n;k++)for(int i=0;i<n;i++)for(int j=0;j<n;j++){
        if(dist[i][k]+dist[k][j]<dist[i][j])dist[i][j]=dist[i][k]+dist[k][j];
    }
    int ans=n-1, best=INT_MAX;
    for(int i=0;i<n;i++){
        int cnt=0;for(int j=0;j<n;j++)if(i!=j&&dist[i][j]<=distanceThreshold)cnt++;
        if(cnt<=best){best=cnt;ans=i;}
    }
    return ans;
}
