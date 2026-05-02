// Day 30 - Question 1
// Problem: Polynomial Using Linked List

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int coeff[100], exp[100];
    for(int i=0;i<n;i++) scanf("%d %d",&coeff[i],&exp[i]);
    for(int i=0;i<n;i++){
        printf("%dx^%d",coeff[i],exp[i]);
        if(i!=n-1) printf(" + ");
    }
    return 0;
}
