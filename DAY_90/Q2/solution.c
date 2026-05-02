// Day 90 - Question 2
// Problem: Split Array Largest Sum

int splitArray(int* nums, int numsSize, int k){int lo=0,hi=0;for(int i=0;i<numsSize;i++){lo+=nums[i];hi+=nums[i];}hi=0;for(int i=0;i<numsSize;i++)hi+=nums[i];int mid,parts;while(lo<hi){mid=(lo+hi)/2;parts=1;int sum=0;for(int i=0;i<numsSize;i++){if(sum+nums[i]>mid){parts++;sum=0;}sum+=nums[i];}if(parts>k)lo=mid+1;else hi=mid;}return lo;}
