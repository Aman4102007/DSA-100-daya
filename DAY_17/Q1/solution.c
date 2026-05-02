// Day 17 - Question 1
// Problem: Find Maximum and Minimum Element

#include <stdio.h>

int main(){
    int n,i;            // number of elements
    int arr[100];       // array to store values
    int max,min;
    if(scanf("%d",&n)!=1) return 0;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    max=min=arr[0];    // initialize with first element
    for(i=1;i<n;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
    return 0;
}
