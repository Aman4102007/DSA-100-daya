// Day 10 - Question 2
// Problem: Intersection of two arrays

#include <stdlib.h>
#include <limits.h>

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int n=min(nums1Size,nums2Size);
    int *res=malloc(n*sizeof(int));
    int k=0;
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){res[k++]=nums1[i]; nums2[j]=INT_MAX; break;}
        }
    }
    *returnSize=k;
    return res;
}
