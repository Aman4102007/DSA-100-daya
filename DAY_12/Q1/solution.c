// Day 12 - Question 1
// Problem: Check Symmetric Matrix

#include <stdio.h>

int main(){
    int m,n; if(scanf("%d%d",&m,&n)!=2) return 0;
    int a[100][100];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    if(m!=n){ printf("Not a Symmetric Matrix"); return 0; }
    for(int i=0;i<m;i++) for(int j=i+1;j<n;j++) if(a[i][j]!=a[j][i]){ printf("Not a Symmetric Matrix"); return 0; }
    printf("Symmetric Matrix");
    return 0;
}
