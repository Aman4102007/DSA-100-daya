// Day 10 - Question 1
// Problem: Check Palindrome

#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    if(scanf("%100s",s)!=1) return 0;
    int n=strlen(s),i=0,j=n-1,ok=1;
    while(i<j){
        if(s[i]!=s[j]){ok=0;break;}
        i++;j--;}
    printf(ok?"YES":"NO");
    return 0;
}
