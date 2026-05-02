// Day 34 - Question 2
// Problem: Basic Calculator II

#include <ctype.h>

int calculate(char* s){
    int n = 0, num = 0, op = '+'; // op holds previous operator
    int stack[2000]; // enough for max length
    int top = 0;
    for(char *p=s; *p; ++p){
        if(isdigit(*p)) num = num*10 + (*p-'0');
        if((!isdigit(*p) && !isspace(*p)) || *(p+1)=='\0'){
            if(op=='+') stack[top++] = num;
            else if(op=='-') stack[top++] = -num;
            else if(op=='*'){ int t=stack[--top]*num; stack[top++]=t; }
            else if(op=='/'){ int t=stack[--top]/num; stack[top++]=t; }
            op = *p; num = 0;
        }
    }
    int res=0; for(int i=0;i<top;i++) res+=stack[i];
    return res;
}