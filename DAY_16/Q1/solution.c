// Day 16 - Question 1
// Problem: Frequency Counter in Array

#include <stdio.h>

int main(){
    int n,i,j,arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    int visited[100]={0};
    int first=1;
    for(i=0;i<n;i++){
        if(visited[i]) continue; // already counted
        int cnt=1;
        for(j=i+1;j<n;j++) if(arr[i]==arr[j]){cnt++; visited[j]=1;}
        if(!first) printf(" ");
        printf("%d:%d",arr[i],cnt);
        first=0;
    }
    return 0;
}
