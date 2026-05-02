// Day 19 - Question 2
// Problem: Maximum Sum Circular Subarray

int maxSubarraySumCircular(int* nums, int numsSize){int max_ending=0,max_sofar=nums[0],min_ending=0,min_sofar=nums[0],total=0;for(int i=0;i<numsSize;i++){int x=nums[i];total+=x;max_ending=max(x,max_ending+x);max_sofar=max(max_sofar,max_ending);min_ending=min(x,min_ending+x);min_sofar=min(min_sofar,min_ending);}return max_sofar==total?max_sofar:max_sofar>total-min_sofar?max_sofar:total-min_sofar;}