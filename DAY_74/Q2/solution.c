// Day 74 - Question 2
// Problem: Number of Connected Components in an Undirected Graph

int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize){int n=isConnectedSize,vis[n];for(int i=0;i<n;i++)vis[i]=0;int ans=0;for(int i=0;i<n;i++)if(!vis[i]){ans++;vis[i]=1;for(int j=0;j<n;j++)if(isConnected[i][j]&& !vis[j]){int stack[n];int top=0;stack[top++]=j;vis[j]=1;while(top){int u=stack[--top];for(int v=0;v<n;v++)if(isConnected[u][v]&& !vis[v]){vis[v]=1;stack[top++]=v;}}}}return ans;}
