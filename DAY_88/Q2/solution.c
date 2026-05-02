// Day 88 - Question 2
// Problem: Magnetic Force Between Two Balls

int maxDistance(int* nums, int numsSize, int maxD){int best=0;for(int i=0;i<numsSize;i++){for(int j=i+1;j<numsSize && j-i<=maxD;j++){int f=(nums[j]-nums[i])/(j-i);if(f>best)best=f;}}return best;}
