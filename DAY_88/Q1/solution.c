// Day 88 - Question 1
// Problem: Aggressive Cows Problem

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){return *(int*)a-*(int*)b;}
int main(){int n,k; if(scanf("%d %d",&n,&k)!=2)return 0; int arr[100]; for(int i=0;i<n;i++)scanf("%d",&arr[i]); qsort(arr,n,sizeof(int),cmp);
 int lo=1,hi=arr[n-1]-arr[0],ans=0; while(lo<=hi){int mid=(lo+hi)/2; int last=arr[0],cnt=1; for(int i=1;i<n;i++){if(arr[i]-last>=mid){cnt++; last=arr[i]; if(cnt>=k){ans=mid; break;}}}
 if(cnt>=k)lo=mid+1; else hi=mid-1;}
 printf("%d",ans); return 0;}
