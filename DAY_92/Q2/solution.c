// Day 92 - Question 2
// Problem: Kth Largest Element in an Array

int findKthLargest(int* nums, int numsSize, int k){
    // simple sort ascending
    int cmp(const void*a,const void*b){return *(int*)a-*(int*)b;}
    qsort(nums,numsSize,sizeof(int),cmp);
    return nums[numsSize-k];
}