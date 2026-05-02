// Day 48 - Question 1
// Problem: Count Leaf Nodes

#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0; if(n==0){printf("0"); return 0;}
    int deg[101]={0};
    for(int i=0;i<n-1;i++){
        int u,v; scanf("%d %d",&u,&v);
        deg[u]++; deg[v]++;
    }
    int leaf=0;
    for(int i=1;i<=n;i++){
        if(n==1) leaf=1; // single node tree
        else if(deg[i]==1) leaf++;
    }
    printf("%d",leaf);
    return 0;
}
