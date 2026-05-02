// Day 24 - Question 1
// Problem: Delete First Occurrence of a Key

#include <stdio.h>
int main(){
    int n,i,key,idx=-1;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++) if(arr[i]==key){idx=i;break;}
    if(idx!=-1){
        for(i=idx;i<n-1;i++) arr[i]=arr[i+1];
        n--;
    }
    for(i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",arr[i]);
    }
    return 0;
}
