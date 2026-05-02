// Day 36 - Question 1
// Problem: Circular Queue Using Array

#include <stdio.h>

int main(){
    int n,i; if(scanf("%d",&n)!=1) return 0;
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    int m; scanf("%d",&m);
    int front=0,rear=0,size=100;
    // enqueue all
    for(i=0;i<n;i++){
        arr[rear]=arr[i];
        rear=(rear+1)%size;
    }
    // dequeue m times
    for(i=0;i<m && front!=rear;i++){
        front=(front+1)%size;
    }
    // print remaining
    int idx=front;
    while(idx!=rear){
        printf("%d",arr[idx]);
        idx=(idx+1)%size;
        if(idx!=rear) printf(" ");
    }
    return 0;
}
