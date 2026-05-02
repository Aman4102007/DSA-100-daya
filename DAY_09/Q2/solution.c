// Day 9 - Question 2
// Problem: Reverse String

void reverseString(char* s, int length){int i=0,j=length-1;while(i<j){char t=s[i];s[i]=s[j];s[j]=t;i++;j--;}}