// Day 38 - Question 2
// Problem: Sliding Window Maximum

int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize){
    *returnSize=numsSize-k+1;int* res=malloc(*returnSize*sizeof(int));
    for(int i=0;i<*returnSize;i++){
        int mx=nums[i];
        for(int j=1;j<k;j++) if(nums[i+j]>mx) mx=nums[i+j];
        res[i]=mx;
    }
    return res;
}