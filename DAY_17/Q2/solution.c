// Day 17 - Question 2
// Problem: Maximum Subarray

int maxSubArray(int* nums, int numsSize){int max=nums[0], cur=nums[0];for(int i=1;i<numsSize;i++){cur=cur>0?cur+nums[i]:nums[i];if(cur>max)max=cur;}return max;}
