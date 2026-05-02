// Day 73 - Question 1
// Problem: First Non-Repeating Character

#include <stdio.h>
int main(){
    char s[101];
    if(scanf("%s",s)!=1) return 0;
    int freq[26]={0};
    for(int i=0;s[i];i++) freq[s[i]-'a']++;
    char ans='\0';
    for(int i=0;s[i];i++) if(freq[s[i]-'a']==1){ ans=s[i]; break; }
    if(ans) printf("%c",ans); else printf("$\n");
    return 0;
}
