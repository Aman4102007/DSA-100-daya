// Day 64 - Question 2
// Problem: Rotting Oranges

int orangesRotting(int** grid, int gridSize, int* gridColSize){int n=gridSize,m=gridColSize[0],i,j,tot=0,rotten=0,ans=0;int q[10000][2],head=0,tail=0;for(i=0;i<n;i++)for(j=0;j<m;j++){if(grid[i][j]==1){tot++;}else if(grid[i][j]==2){q[tail][0]=i;q[tail][1]=j;tail++;rotten++;}}int dirs[4][2]={{-1,0},{1,0},{0,-1},{0,1}};while(head<tail){int sz=tail-head;int changed=0;for(i=0;i<sz;i++){int r=q[head][0],c=q[head][1];head++;for(j=0;j<4;j++){int nr=r+dirs[j][0],nc=c+dirs[j][1];if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1){grid[nr][nc]=2;q[tail][0]=nr;q[tail][1]=nc;tail++;rotten++;changed++;}}}if(changed){ans++;}}return rotten==tot?ans:-1;}
