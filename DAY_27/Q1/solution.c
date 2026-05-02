// Day 27 - Question 1
// Problem: Find Intersection Point of Two Linked Lists

#include <stdio.h>

int main(){
    int n,m; 
    if(scanf("%d",&n)!=1) return 0;
    int a[100],b[100];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    int inter=-1;
    for(int i=0;i<n && inter==-1;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){ inter=a[i]; break; }
        }
    }
    if(inter==-1) printf("No Intersection");
    else printf("%d",inter);
    return 0;
}
