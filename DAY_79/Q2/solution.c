// Day 79 - Question 2
// Problem: Strongly Connected Components

#include <bits/stdc++.h>
using namespace std;

int SCC(int V, vector<int> adj[]) {
    vector<int> rev[V];
    for(int u=0;u<V;u++) for(int v:adj[u]) rev[v].push_back(u);
    vector<int> order, vis(V,0);
    function<void(int)> dfs1=[&](int u){vis[u]=1;for(int v:adj[u]) if(!vis[v]) dfs1(v);order.push_back(u);};
    for(int i=0;i<V;i++) if(!vis[i]) dfs1(i);
    vis.assign(V,0);int comp=0;
    function<void(int)> dfs2=[&](int u){vis[u]=1;for(int v:rev[u]) if(!vis[v]) dfs2(v);};
    for(int i=V-1;i>=0;i--){int u=order[i]; if(!vis[u]){dfs2(u);comp++;}}
    return comp;
}
