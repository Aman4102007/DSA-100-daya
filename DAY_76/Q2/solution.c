// Day 76 - Question 2
// Problem: Clone Graph

#include <stdlib.h>

typedef struct Node {
    int val;
    int numNeighbors;
    struct Node **neighbors;
} Node;

Node* clone(Node* n, Node* map[101]){
    if(!n) return NULL;
    if(map[n->val]) return map[n->val];
    Node* c=(Node*)malloc(sizeof(Node));
    c->val=n->val; c->numNeighbors=n->numNeighbors; c->neighbors=NULL;
    map[c->val]=c;
    if(n->numNeighbors){
        c->neighbors=(Node**)malloc(sizeof(Node*)*n->numNeighbors);
        for(int i=0;i<n->numNeighbors;i++) c->neighbors[i]=clone(n->neighbors[i],map);
    }
    return c;
}

Node* cloneGraph(Node* node){
    Node* map[101]={0};
    return clone(node,map);
}