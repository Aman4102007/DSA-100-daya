// Day 61 - Question 2
// Problem: Number of Provinces

int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize){int n=isConnectedSize, comp=0;int vis[1000]={0};for(int i=0;i<n;i++){if(!vis[i]){comp++;for(int j=0;j<n;j++)if(isConnected[i][j]&& !vis[j]){int stack[1000],top=0;stack[top++]=j;vis[j]=1;while(top){int u=stack[--top];for(int v=0;v<n;v++)if(isConnected[u][v]&& !vis[v]){vis[v]=1;stack[top++]=v;}}}}}return comp;}
