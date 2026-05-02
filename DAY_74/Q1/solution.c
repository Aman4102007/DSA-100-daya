// Day 74 - Question 1
// Problem: Winner of an Election

#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j,idx,tot=0;
    char vote[30];
    char names[100][30];
    int cnt[100];
    int distinct=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",vote);
        idx=-1;
        for(j=0;j<distinct;j++) if(strcmp(names[j],vote)==0){idx=j;break;}
        if(idx==-1){strcpy(names[distinct],vote);cnt[distinct]=1;distinct++;}
        else cnt[idx]++;
    }
    int best=0;
    for(i=1;i<distinct;i++){
        if(cnt[i]>cnt[best]) best=i;
        else if(cnt[i]==cnt[best] && strcmp(names[i],names[best])<0) best=i;
    }
    printf("%s %d",names[best],cnt[best]);
    return 0;
}
