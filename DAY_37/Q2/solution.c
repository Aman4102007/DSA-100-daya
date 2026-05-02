// Day 37 - Question 2
// Problem: Kth Largest Element in a Stream

#include <stdlib.h>
#include <string.h>

// Simple struct to hold state
typedef struct {
    int *arr;
    int k;
    int sz;
} KthLargest;

// Constructor
KthLargest* Constructor(int k, int* nums, int numsSize){
    KthLargest* obj = (KthLargest*)malloc(sizeof(KthLargest));
    obj->k = k;
    obj->sz = numsSize;
    obj->arr = (int*)malloc(sizeof(int)*numsSize);
    memcpy(obj->arr, nums, sizeof(int)*numsSize);
    return obj;
}

// Add element and return kth largest
int add(KthLargest* obj, int val){
    // append
    obj->arr = (int*)realloc(obj->arr, sizeof(int)*(obj->sz+1));
    obj->arr[obj->sz++] = val;
    // simple sort
    for(int i=0;i<obj->sz-1;i++){
        for(int j=i+1;j<obj->sz;j++){
            if(obj->arr[i] < obj->arr[j]){int t=obj->arr[i];obj->arr[i]=obj->arr[j];obj->arr[j]=t;}
        }
    }
    return obj->arr[obj->k-1];
}

// Destructor
void Destructor(KthLargest* obj){
    free(obj->arr);
    free(obj);
}
