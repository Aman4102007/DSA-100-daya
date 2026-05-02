// Day 39 - Question 2
// Problem: Top K Frequent Elements

#include <stdlib.h>

int cmp(const void *a, const void *b){
    int ca=((int*)a)[1], cb=((int*)b)[1];
    return cb-ca; // desc by count
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize){
    // sort nums to count frequencies
    qsort(nums, numsSize, sizeof(int), cmp);
    // first pass: count unique values
    int uniq=0;
    int *vals=malloc(numsSize*sizeof(int));
    int *cnts=malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;){
        int v=nums[i], c=0;
        while(i<numsSize && nums[i]==v){c++;i++;}
        vals[uniq]=v; cnts[uniq]=c; uniq++;
    }
    // build array of [value,count]
    int (*arr)[2]=malloc(uniq*sizeof(int[2]));
    for(int i=0;i<uniq;i++){arr[i][0]=vals[i]; arr[i][1]=cnts[i];}
    // sort by count desc
    qsort(arr, uniq, sizeof(int[2]), cmp);
    // pick top k
    int *res=malloc(k*sizeof(int));
    for(int i=0;i<k;i++) res[i]=arr[i][0];
    *returnSize=k;
    free(vals); free(cnts); free(arr);
    return res;
}
