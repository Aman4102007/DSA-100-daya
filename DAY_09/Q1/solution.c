// Day 9 - Question 1
// Problem: Mirror the Code Name

#include <stdio.h>
#include <string.h>
int main(){
    char arr[101];
    if(scanf("%100s",arr)!=1) return 0;
    int n=strlen(arr);
    for(int i=n-1;i>=0;--i) putchar(arr[i]);
    putchar('\n');
    return 0;
}
