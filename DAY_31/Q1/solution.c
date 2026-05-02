// Day 31 - Question 1
// Problem: Stack Implementation using Array

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100]; int pos=-1; // top index
    for(int i=0;i<n;i++){
        int op; scanf("%d",&op);
        if(op==1){int x; scanf("%d",&x); arr[++pos]=x;} // push
        else if(op==2){ // pop
            if(pos==-1) printf("Stack Underflow\n");
            else{printf("%d\n",arr[pos--]);}
        }
        else if(op==3){ // display
            for(int j=pos;j>=0;j--){printf("%d",arr[j]); if(j) printf(" ");}
            printf("\n");
        }
    }
    return 0;
}
