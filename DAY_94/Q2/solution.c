// Day 94 - Question 2
// Problem: Relative Sort Array

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){
    int freq[1001]={0};
    for(int i=0;i<arr1Size;i++) freq[arr1[i]]++;
    int* res=(int*)malloc(sizeof(int)*arr1Size);
    int idx=0;
    for(int i=0;i<arr2Size;i++){
        while(freq[arr2[i]]--){res[idx++]=arr2[i];}
    }
    for(int v=0;v<=1000;v++){
        while(freq[v]--){res[idx++]=v;}
    }
    *returnSize=arr1Size;
    return res;
}