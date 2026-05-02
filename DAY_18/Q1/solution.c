// Day 18 - Question 1
// Problem: Rotate Array by K Positions

#include <stdio.h>

int main(){
    int n,k,i;
    if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);
    k%=n; // effective rotations
    int temp[100];
    for(i=0;i<n;i++) temp[(i+k)%n]=arr[i]; // rotate
    for(i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",temp[i]);
    }
    return 0;
}
