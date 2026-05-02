// Day 89 - Question 1
// Problem: Allocate Minimum Pages

#include <stdio.h>

int main(){
    int n,m; if(scanf("%d %d",&n,&m)!=2) return 0;
    int arr[100];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int low=0, high=0;
    for(int i=0;i<n;i++){ if(arr[i]>low) low=arr[i]; high+=arr[i]; }
    int ans=high;
    while(low<=high){
        int mid=(low+high)/2;
        int need=1, sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>mid){ need++; sum=arr[i]; }
            else sum+=arr[i];
        }
        if(need<=m){ ans=mid; high=mid-1; }
        else low=mid+1;
    }
    printf("%d",ans);
    return 0;
}
