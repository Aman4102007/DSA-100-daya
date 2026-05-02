// Day 37 - Question 1
// Problem: Priority Queue Using Array

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int arr[100]; int sz=0;
    char op[10];
    for(int i=0;i<n;i++){
        scanf("%s",op);
        if(op[0]=='i'){ // insert
            int x; scanf("%d",&x);
            if(sz<100) arr[sz++]=x;
        }else if(op[0]=='d'){ // delete
            if(sz==0){ printf("-1\n"); }
            else{
                int min=0;
                for(int j=1;j<sz;j++) if(arr[j]<arr[min]) min=j;
                printf("%d\n",arr[min]);
                for(int j=min;j<sz-1;j++) arr[j]=arr[j+1];
                sz--;
            }
        }else if(op[0]=='p'){ // peek
            if(sz==0){ printf("-1\n"); }
            else{
                int min=0;
                for(int j=1;j<sz;j++) if(arr[j]<arr[min]) min=j;
                printf("%d\n",arr[min]);
            }
        }
    }
    return 0;
}
