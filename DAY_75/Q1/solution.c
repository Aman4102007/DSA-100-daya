// Day 75 - Question 1
// Problem: Largest Subarray with Zero Sum

#include <stdio.h>

int main(){
    int arr[100], n=0, x;
    while(scanf("%d", &x)==1 && n<100){
        arr[n++]=x;
    }
    int maxlen=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==0 && j-i+1>maxlen) maxlen=j-i+1;
        }
    }
    printf("%d", maxlen);
    return 0;
}
