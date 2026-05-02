// Day 41 - Question 1
// Problem: Queue Using Linked List

#include <stdio.h>
int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100]; int front=-1, rear=-1;
    for(int i=0;i<n;i++){
        int op; scanf("%d",&op);
        if(op==1){int x; scanf("%d",&x); if(rear<99){if(front==-1) front=0; arr[++rear]=x;}}
        else if(op==2){if(front==-1) printf("-1\n"); else{printf("%d\n",arr[front]); if(front==rear) front=rear=-1; else front++;}}
    }
    return 0;
}
