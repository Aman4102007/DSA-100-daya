// Day 14 - Question 1
// Problem: Check Identity Matrix

#include <stdio.h>

int main(){
    int n,i,j,mat[100][100];
    if(scanf("%d",&n)!=1) return 0;          // read size
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) scanf("%d",&mat[i][j]);
    }
    int ok=1;                                 // assume identity
    for(i=0;i<n && ok;i++){
        for(j=0;j<n;j++){
            if(i==j){
                if(mat[i][j]!=1){ ok=0; break; }
            }else{
                if(mat[i][j]!=0){ ok=0; break; }
            }
        }
    }
    if(ok) printf("Identity Matrix");
    else   printf("Not an Identity Matrix");
    return 0;
}
