// Day 91 - Question 2
// Problem: Sort Colors

void sortColors(int* nums,int numsSize){int c[3]={0,0,0},i,j=0;for(i=0;i<numsSize;i++)c[nums[i]]++;for(i=0;i<3;i++)while(c[i]--){nums[j++]=i;}}