// Day 3 - Question 1
// Problem: Linear Search with Comparison Count

#include <stdio.h>

int main(){
    int n,i,arr[100],k,pos=-1,comp=0;
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++){
        comp++;                 // comparison with arr[i]
        if(arr[i]==k){
            pos=i; break;
        }
    }
    if(pos!=-1) printf("Found at index %d\n",pos);
    else printf("Not Found\n");
    printf("Comparisons = %d\n",comp);
    return 0;
}
