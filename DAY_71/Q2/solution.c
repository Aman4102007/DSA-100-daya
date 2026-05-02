// Day 71 - Question 2
// Problem: Min Cost to Connect All Points

int minCostConnectPoints(int** points, int pointsSize, int* pointsColSize){int n=pointsSize;int dist[100];int vis[100]={0};for(int i=0;i<n;i++)dist[i]=1e9;dist[0]=0;int ans=0;for(int k=0;k<n;k++){int u=-1;int d=1e9;for(int i=0;i<n;i++)if(!vis[i]&&dist[i]<d){d=dist[i];u=i;}vis[u]=1;ans+=d;for(int v=0;v<n;v++)if(!vis[v]){int w=abs(points[u][0]-points[v][0])+abs(points[u][1]-points[v][1]);if(w<dist[v])dist[v]=w;}}return ans;}
