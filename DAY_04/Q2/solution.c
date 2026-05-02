// Day 4 - Question 2
// Problem: Remove Element

int removeElement(int* nums, int numsSize, int val){int i=0;for(int j=0;j<numsSize;j++)if(nums[j]!=val)nums[i++]=nums[j];return i;}
