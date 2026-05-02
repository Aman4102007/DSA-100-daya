// Day 84 - Question 2
// Problem: Find Peak Element

int findPeakElement(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++){
        if((i==0||nums[i]>nums[i-1])&&(i==numsSize-1||nums[i]>nums[i+1])) return i;
    }
    return -1; // unreachable
}