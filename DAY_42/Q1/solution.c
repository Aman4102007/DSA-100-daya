// Day 42 - Question 1
// Problem: Reverse a Queue Using Stack

#include <stdio.h>
int main(){
    int n,i; if(scanf("%d",&n)!=1)return 0; int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    int stack[100]; int top=-1;
    for(i=0;i<n;i++) stack[++top]=arr[i]; // push all
    for(i=0;i<n;i++){
        int x=stack[top--];
        printf("%d",x);
        if(i!=n-1) printf(" ");
    }
    return 0;
}
