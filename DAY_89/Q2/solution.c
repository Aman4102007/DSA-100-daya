// Day 89 - Question 2
// Problem: Capacity To Ship Packages Within D Days

int shipWithinDays(int* w,int n,int D){int lo=0,hi=0;for(int i=0;i<n;i++){lo+=w[i];hi+=w[i];}int loCap=0,hiCap=hi;while(loCap<hiCap){int mid=(loCap+hiCap)/2;int days=1,sum=0;for(int i=0;i<n;i++){if(sum+w[i]>mid){days++;sum=0;}sum+=w[i];}if(days<=D)hiCap=mid;else loCap=mid+1;}return loCap;}
