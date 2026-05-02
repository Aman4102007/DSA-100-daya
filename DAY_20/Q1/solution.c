// Day 20 - Question 1
// Problem: Count Subarrays with Sum Zero

#include <stdio.h>
int main(){
    int n,i,j; long long cnt=0; int arr[100];
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        int sum=0;
        for(j=i;j<n;j++){
            sum+=arr[j];
            if(sum==0) cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}
