// Day 32 - Question 1
// Problem: Push and Pop in Stack

#include <stdio.h>

int main(){
    int n,i,m,pos=0,arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        pos++; // push
    }
    scanf("%d",&m);
    for(i=0;i<m && pos>0;i++) pos--; // pop
    for(i=pos-1;i>=0;i--){
        printf("%d",arr[i]);
        if(i>0) printf(" ");
    }
    return 0;
}
