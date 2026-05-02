// Day 72 - Question 1
// Problem: First Repeated Character

#include <stdio.h>

int main(){
    char s[1000];
    if(scanf("%s",s)!=1) return 0;
    int cnt[26]={0};
    for(int i=0;s[i];i++){
        int idx=s[i]-'a';
        cnt[idx]++;
        if(cnt[idx]==2){
            printf("%c",s[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
