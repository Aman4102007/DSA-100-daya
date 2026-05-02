// Day 70 - Question 2
// Problem: Cheapest Flights Within K Stops

#include <limits.h>
int findCheapestPrice(int n, int** flights, int flightsSize, int* flightsColSize, int src, int dst, int k) {
    int INF = 0x3f3f3f3f;
    int dist[n];
    for (int i=0;i<n;i++) dist[i]=INF;
    dist[src]=0;
    for (int step=0; step<=k; step++) {
        int prev[n];
        for (int i=0;i<n;i++) prev[i]=dist[i];
        for (int i=0;i<flightsSize;i++) {
            int u=flights[i][0], v=flights[i][1], w=flights[i][2];
            if (prev[u]!=INF && prev[u]+w<dist[v]) dist[v]=prev[u]+w;
        }
    }
    return dist[dst]==INF ? -1 : dist[dst];
}