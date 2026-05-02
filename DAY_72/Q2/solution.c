// Day 72 - Question 2
// Problem: Travelling Salesman Problem

int tsp(int n, int graph[n][n]){
    int min=INT_MAX, mask=1<<n;
    int dp[1<<15][15]; // assuming n<=15
    for(int i=0;i<mask;i++) for(int j=0;j<n;j++) dp[i][j]=INT_MAX;
    dp[1][0]=0;
    for(int s=1;s<mask;s++){
        for(int i=0;i<n;i++) if(s&(1<<i)){
            int prev=s^(1<<i);
            if(prev==0) continue;
            for(int j=0;j<n;j++) if(prev&(1<<j)){
                if(dp[prev][j]!=INT_MAX)
                    dp[s][i]=min(dp[s][i],dp[prev][j]+graph[j][i]);
            }
        }
    }
    for(int i=1;i<n;i++) if(dp[mask-1][i]!=INT_MAX)
        min=min(min,dp[mask-1][i]+graph[i][0]);
    return min;
}