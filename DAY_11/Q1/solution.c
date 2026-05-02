// Day 11 - Question 1
// Problem: Matrix Addition

#include <stdio.h>

int main(){
    int m,n,i,j;
    if(scanf("%d %d",&m,&n)!=2) return 0;
    int a[100][100],b[100][100];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(j) printf(" ");
            printf("%d",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
