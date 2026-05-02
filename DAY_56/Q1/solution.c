// Day 56 - Question 1
// Problem: Symmetric Binary Tree Check

#include <stdio.h>

int n;
int arr[200];

int isMirror(int i, int j){
    int leftNull = (i>=n || arr[i]==-1);
    int rightNull = (j>=n || arr[j]==-1);
    if(leftNull && rightNull) return 1;
    if(leftNull || rightNull) return 0;
    if(arr[i]!=arr[j]) return 0;
    return isMirror(2*i+1,2*j+2) && isMirror(2*i+2,2*j+1);
}

int main(){
    if(scanf("%d", &n)!=1) return 0;
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    if(isMirror(1,2)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
