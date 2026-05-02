// Day 15 - Question 1
// Problem: Matrix Diagonal Sum

#include <stdio.h>

int main(){
    int m,n,i,j,sum=0;
    if(scanf("%d %d",&m,&n)!=2) return 0;
    int a[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(i==j) sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
