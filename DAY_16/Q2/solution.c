// Day 16 - Question 2
// Problem: Rotate Array

void rotateArray(int* nums, int numsSize, int k){k%=numsSize;for(int t=0;t<k;t++){int tmp=nums[numsSize-1];for(int i=numsSize-1;i>0;i--)nums[i]=nums[i-1];nums[0]=tmp;}}