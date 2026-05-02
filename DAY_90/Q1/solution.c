// Day 90 - Question 1
// Problem: Painter Partition Problem

#include <stdio.h>
int main(){int n,k; if(scanf("%d %d",&n,&k)!=2)return 0; int arr[100]; long long sum=0, mx=0; for(int i=0;i<n;i++){scanf("%d",&arr[i]); sum+=arr[i]; if(arr[i]>mx)mx=arr[i];}
 long long low=mx, high=sum, ans=sum; while(low<=high){ long long mid=(low+high)/2; int need=1; long long cur=0; for(int i=0;i<n;i++){ if(cur+arr[i]<=mid) cur+=arr[i]; else{need++; cur=arr[i];}}
 if(need<=k){ans=mid; high=mid-1;} else low=mid+1;}
 printf("%lld",ans); return 0;}
