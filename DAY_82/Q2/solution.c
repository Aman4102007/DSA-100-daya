// Day 82 - Question 2
// Problem: Search Insert Position

int searchInsert(int* nums, int numsSize, int target){int i;for(i=0;i<numsSize;i++){if(nums[i]>=target)return i;}return numsSize;}
