// Day 35 - Question 2
// Problem: Implement Queue using Stacks

#include <stdio.h>
#include <stdlib.h>

// LeetCode signature
typedef struct {
    int s1[1000], s2[1000];
    int t1, t2; // top indices
} MyQueue;

MyQueue* myQueueCreate(){
    MyQueue* q=(MyQueue*)malloc(sizeof(MyQueue));
    q->t1=q->t2=0; return q;
}

void myQueuePush(MyQueue* q,int x){
    q->s1[q->t1++]=x; // push onto s1
}

int myQueuePop(MyQueue* q){
    if(q->t2==0){
        while(q->t1){
            q->s2[q->t2++]=q->s1[--q->t1];
        }
    }
    return q->s2[--q->t2];
}

int myQueuePeek(MyQueue* q){
    if(q->t2==0){
        while(q->t1){
            q->s2[q->t2++]=q->s1[--q->t1];
        }
    }
    return q->s2[q->t2-1];
}

int myQueueEmpty(MyQueue* q){
    return q->t1==0 && q->t2==0;
}

void myQueueFree(MyQueue* q){free(q);}