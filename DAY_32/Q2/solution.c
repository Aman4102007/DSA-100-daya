// Day 32 - Question 2
// Problem: Min Stack

#include <stdlib.h>

typedef struct{int *st,*mn;int cap,sz;}MinStack;

MinStack* MinStackCreate(){MinStack*s=malloc(sizeof(MinStack));s->cap=4;s->sz=0;s->st=malloc(s->cap*sizeof(int));s->mn=malloc(s->cap*sizeof(int));return s;}

void MinStackPush(MinStack* s,int x){if(s->sz==s->cap){s->cap*=2; s->st=realloc(s->st,s->cap*sizeof(int));s->mn=realloc(s->mn,s->cap*sizeof(int));}
s->st[s->sz]=x; s->mn[s->sz]=s->sz? (x<s->mn[s->sz-1]?x:s->mn[s->sz-1]):x; s->sz++;}

void MinStackPop(MinStack* s){if(s->sz) s->sz--;}

int MinStackTop(MinStack* s){return s->st[s->sz-1];}

int MinStackGetMin(MinStack* s){return s->mn[s->sz-1];}

void MinStackFree(MinStack* s){free(s->st);free(s->mn);free(s);}
