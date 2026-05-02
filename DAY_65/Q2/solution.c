// Day 65 - Question 2
// Problem: Graph Cycle Detection

#include <bits/stdc++.h>
using namespace std;

bool dfs(int u,int p,vector<int>&vis,vector<vector<int>>&adj){
    vis[u]=1;
    for(int v:adj[u]) if(v!=p){
        if(vis[v]) return true;
        if(dfs(v,u,vis,adj)) return true;
    }
    return false;
}

int isCycle(int V, vector<vector<int>>&adj){
    vector<int>vis(V,0);
    for(int i=0;i<V;i++) if(!vis[i]) if(dfs(i,-1,vis,adj)) return 1;
    return 0;
}
