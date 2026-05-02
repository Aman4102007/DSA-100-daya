// Day 40 - Question 2
// Problem: Daily Temperatures

int* dailyTemperatures(int* T, int TSize, int* returnSize){int* ans=malloc(TSize*sizeof(int));int* st=malloc(TSize*sizeof(int));int top=-1;for(int i=0;i<TSize;i++){while(top>=0 && T[i]>T[st[top]]){ans[st[top--]]=i-st[top+1];}st[++top]=i;}while(top>=0)ans[st[top--]]=0;*returnSize=TSize;return ans;}
