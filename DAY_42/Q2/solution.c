// Day 42 - Question 2
// Problem: Find Median from Data Stream

#include <stdlib.h>

struct MedianFinder{int *a;int sz;int cap;};

struct MedianFinder* medianFinderCreate(){struct MedianFinder*o=malloc(sizeof*o);o->a=NULL;o->sz=0;o->cap=0;return o;}

void medianFinderAddNum(struct MedianFinder*o,int num){if(o->sz==o->cap){int nc=o->cap?o->cap<<1:4;o->a=realloc(o->a,nc*sizeof*o->a);o->cap=nc;}o->a[o->sz++]=num;}

int cmp(const void*a,const void*b){return (*(int*)a-*(int*)b);} 

double medianFinderFindMedian(struct MedianFinder*o){int *t=malloc(o->sz*sizeof*o->a);for(int i=0;i<o->sz;i++)t[i]=o->a[i];qsort(t,o->sz,sizeof*o->a,cmp);double m;int mid=o->sz/2;if(o->sz%2) m=t[mid];else m=(t[mid-1]+t[mid])/2.0;free(t);return m;}

void medianFinderFree(struct MedianFinder*o){free(o->a);free(o);}
