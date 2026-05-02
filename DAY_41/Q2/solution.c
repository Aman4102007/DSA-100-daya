// Day 41 - Question 2
// Problem: Task Scheduler

int leastInterval(char* tasks, int tasksSize, int n){int freq[26]={0};for(int i=0;i<tasksSize;i++)freq[tasks[i]-'A']++;int max=0,cnt=0;for(int i=0;i<26;i++){if(freq[i]>max){max=freq[i];cnt=1;}else if(freq[i]==max){cnt++;}}int res=(max-1)*(n+1)+cnt;return res>tasksSize?res:tasksSize;}
