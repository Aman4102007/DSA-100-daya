// Day 39 - Question 1
// Problem: Min Heap Implementation

#include <stdio.h>

int arr[100];
int sz=0;

void siftUp(int i){
    while(i>1 && arr[i/2]>arr[i]){
        int t=arr[i]; arr[i]=arr[i/2]; arr[i/2]=t;
        i/=2;
    }
}

void siftDown(int i){
    while(1){
        int l=i*2, r=l+1, smallest=i;
        if(l<=sz && arr[l]<arr[smallest]) smallest=l;
        if(r<=sz && arr[r]<arr[smallest]) smallest=r;
        if(smallest==i) break;
        int t=arr[i]; arr[i]=arr[smallest]; arr[smallest]=t;
        i=smallest;
    }
}

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    char cmd[10]; int x;
    for(int k=0;k<n;k++){
        scanf("%s",cmd);
        if(cmd[0]=='i'){ // insert
            scanf("%d",&x);
            arr[++sz]=x; siftUp(sz);
        }else if(cmd[0]=='e'){ // extractMin
            if(sz==0) printf("-1\n");
            else{ printf("%d\n",arr[1]); arr[1]=arr[sz--]; siftDown(1); }
        }else if(cmd[0]=='p'){ // peek
            if(sz==0) printf("-1\n");
            else printf("%d\n",arr[1]);
        }
    }
    return 0;
}
