// Day 69 - Question 2
// Problem: Network Delay Time

int networkDelayTime(int** times,int timesSize,int* timesColSize,int N,int K){int INF=1e9;int i,j,k;int d[101][101];for(i=1;i<=N;i++)for(j=1;j<=N;j++)d[i][j]= (i==j?0:INF);for(i=0;i<timesSize;i++){int u=times[i][0],v=times[i][1],w=times[i][2];d[u][v]=w;}for(k=1;k<=N;k++)for(i=1;i<=N;i++)if(d[i][k]<INF)for(j=1;j<=N;j++)if(d[k][j]<INF && d[i][j]>d[i][k]+d[k][j])d[i][j]=d[i][k]+d[k][j];int ans=0;for(i=1;i<=N;i++){if(d[K][i]==INF)return -1;if(d[K][i]>ans)ans=d[K][i];}return ans;}
