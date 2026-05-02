// Day 38 - Question 1
// Problem: Deque Operations

#include <stdio.h>

#define MAX 200
int a[MAX];
int h=0, t=0; // head, tail

int empty(){return h==t;}
int size(){return (t-h+MAX)%MAX;}
int front(){return a[h];}
int back(){return a[(t-1+MAX)%MAX];}

int main(){
    char cmd[20];
    int x;
    while (scanf("%s", cmd)==1){
        if (cmd[0]=='p' && cmd[1]=='u' && cmd[2]=='s' && cmd[3]=='h' && cmd[4]=='_'){
            if (cmd[5]=='f'){ // push_front
                scanf("%d", &x);
                h=(h-1+MAX)%MAX; a[h]=x;
            }else{ // push_back
                scanf("%d", &x);
                a[t]=x; t=(t+1)%MAX;
            }
        }else if (cmd[0]=='p' && cmd[1]=='o' && cmd[2]=='p' && cmd[3]=='_'){
            if (cmd[4]=='f'){ // pop_front
                if (!empty()) h=(h+1)%MAX;
            }else{ // pop_back
                if (!empty()) t=(t-1+MAX)%MAX;
            }
        }else if (cmd[0]=='f' && cmd[1]=='r' && cmd[2]=='o' && cmd[3]=='n' && cmd[4]=='t'){
            if (!empty()) printf("%d\n", front());
        }else if (cmd[0]=='b' && cmd[1]=='a' && cmd[2]=='c' && cmd[3]=='k'){
            if (!empty()) printf("%d\n", back());
        }else if (cmd[0]=='e' && cmd[1]=='m' && cmd[2]=='p' && cmd[3]=='t' && cmd[4]=='y'){
            printf("%d\n", empty());
        }else if (cmd[0]=='s' && cmd[1]=='i' && cmd[2]=='z' && cmd[3]=='e'){
            printf("%d\n", size());
        }
    }
    return 0;
}
